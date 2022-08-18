/* -----------------------------------------------------------------------------
 * Copyright (c) 2017 ARM Ltd.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from
 * the use of this software. Permission is granted to anyone to use this
 * software for any purpose, including commercial applications, and to alter
 * it and redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in
 *    a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *
 * $Date:        27. February 2017
 * $Revision:    V1.0.0
 *
 * Project:      Flash Programming Functions for S32K
 * --------------------------------------------------------------------------- */

/* History:
 *  Version 1.00
 *    Initial release
 */

#include <stdint.h>
#include "FlashOS.h"        /* FlashOS Structures */
#include "flash_driver.h"


#if   defined (PFLASH)
  #define SECTOR_SIZE       FEATURE_FLS_PF_BLOCK_SECTOR_SIZE
  #define WRITE_UNIT_SIZE   FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE
#elif defined (DFLASH)
  #define SECTOR_SIZE       FEATURE_FLS_DF_BLOCK_SECTOR_SIZE
  #define WRITE_UNIT_SIZE   FEATURE_FLS_DF_BLOCK_WRITE_UNIT_SIZE
#else
#endif

#define MARGIN_LEVEL_NORMAL        0x00U
#define MARGIN_LEVEL_USER          0x01U
#define MARGIN_LEVEL_FACTORY       0x02U

uint8_t             flash_FSEC_FOPT[SECURITY_SIZE];
flash_user_config_t flash_user_config;
flash_ssd_config_t  flash_ssd_config;

/* This function initializes all the RO, RW data in the PI library.
   It is called from the C library startup code.
   The flash algorithm does not execute the C library startup code
   so we must call it manually.
 */
//extern void __cpp_initialize__aeabi_(void);

/*
 *  Initialize Flash Programming Functions
 *    Parameter:      adr:  Device Base Address
 *                    clk:  Clock Frequency (Hz)
 *                    fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */
int Init (unsigned long adr, unsigned long clk, unsigned long fnc) {
  status_t ret;

//  __cpp_initialize__aeabi_();

  /* set run mode (remove low power mode) */
  RunMode_Set();

  /* disable the watchdog */
  Watchdog_Disable();

  /* initialize unsecure key */
  #if (SECURITY_SIZE == 4)
    flash_FSEC_FOPT[0] = 0xFEU;      /* FSEC */
    flash_FSEC_FOPT[1] = 0xFFU;      /* FOPT */
    flash_FSEC_FOPT[2] = 0xFFU;
    flash_FSEC_FOPT[3] = 0xFFU;
  #else
    flash_FSEC_FOPT[0] = 0xFFU;
    flash_FSEC_FOPT[1] = 0xFFU;
    flash_FSEC_FOPT[2] = 0xFFU;
    flash_FSEC_FOPT[3] = 0xFFU;
    flash_FSEC_FOPT[4] = 0xFEU;      /* FSEC */
    flash_FSEC_FOPT[5] = 0x7FU;      /* FOPT */
    flash_FSEC_FOPT[6] = 0xFFU;
    flash_FSEC_FOPT[7] = 0xFFU;
  #endif

  /* disable flash_user_config */
  flash_user_config.PFlashBase = 0U;
  flash_user_config.PFlashSize = FEATURE_FLS_PF_BLOCK_SIZE;
  flash_user_config.DFlashBase = FEATURE_FLS_DF_START_ADDRESS;
  flash_user_config.EERAMBase  = FEATURE_FLS_FLEX_RAM_START_ADDRESS;
  flash_user_config.CallBack   = NULL_CALLBACK;

  /* initialize global flash properties structure */
  ret = FLASH_DRV_Init(&flash_user_config, &flash_ssd_config);
  if (ret == STATUS_SUCCESS)
  {
    return (0);                                               /* Finished without Errors */
  }
  else
  {
    return (1);                                               /* Finished with Errors */
  }
}


/*
 *  De-Initialize Flash Programming Functions
 *    Parameter:      fnc:  Function Code (1 - Erase, 2 - Program, 3 - Verify)
 *    Return Value:   0 - OK,  1 - Failed
 */

int UnInit (unsigned long fnc) {

  return (0);                                                 /* Finished without Errors */
}


/*  Blank Check Block in Flash Memory
 *    Parameter:      adr:  Block Start Address
 *                    sz:   Block Size (in bytes)
 *                    pat:  Block Pattern
 *    Return Value:   0 - OK,  1 - Failed
 */
int BlankCheck (unsigned long adr, unsigned long sz, unsigned char pat) {
  int ret;

  ret = FLASH_DRV_VerifySection(&flash_ssd_config, adr, sz, MARGIN_LEVEL_NORMAL);
  if (ret == STATUS_SUCCESS)
  {
    return (0);                                               /* Finished without Errors */
  }
  else
  {
    return (1);                                               /* Finished with Errors */
  }
}


/*
 *  Erase complete Flash Memory
 *    Return Value:   0 - OK,  1 - Failed
 */
int EraseChip (void) {
  status_t ret;

  ret = FLASH_DRV_EraseAllBlock(&flash_ssd_config);
  if (ret != STATUS_SUCCESS)
  {
    return (1);
  }

  /* program FSEC FOPT bytes */
  ret = FLASH_DRV_Program(&flash_ssd_config, SECURITY_LOCATION, SECURITY_SIZE, flash_FSEC_FOPT);
  if (ret == STATUS_SUCCESS)
  {
    return (0);                                               /* Finished without Errors */
  }
  else
  {
    return (1);                                               /* Finished with Errors */
  }
}


/*
 *  Erase Sector in Flash Memory
 *    Parameter:      adr:  Sector Address
 *    Return Value:   0 - OK,  1 - Failed
 */
int EraseSector (unsigned long adr) {
  int ret;

  ret = FLASH_DRV_EraseSector(&flash_ssd_config, adr, SECTOR_SIZE);
  if (ret == STATUS_SUCCESS)
  {
    return (0);                                               /* Finished without Errors */
  }
  else
  {
    return (1);                                               /* Finished with Errors */
  }
}


/*
 *  Program Page in Flash Memory
 *    Parameter:      adr:  Page Start Address
 *                    sz:   Page Size
 *                    buf:  Page Data
 *    Return Value:   0 - OK,  1 - Failed
 */
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
  status_t ret;

  sz = (sz + (WRITE_UNIT_SIZE - 1)) & ~(WRITE_UNIT_SIZE - 1);     /* Align to WRITE_UNIT_SIZE */

  ret = FLASH_DRV_Program(&flash_ssd_config, adr, sz, buf);
  if (ret == STATUS_SUCCESS)
  {
    return (0);                                               /* Finished without Errors */
  }
  else
  {
    return (1);                                               /* Finished with Errors */
  }
}
