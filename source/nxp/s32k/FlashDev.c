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
 * $Date:        07. December 2017
 * $Revision:    V1.1.0
 *
 * Project:      Flash Device Description for S32K
 * --------------------------------------------------------------------------- */

/* History:
 *  Version 1.1.0
 *    Added "S32K148 512KB DFlash (4KB Sector)".
 *  Version 1.0.0
 *    Initial release
 */

#include "FlashOS.h"        /* FlashOS Structures */

#define FLASH_DRV_VERS (0x0100+VERS)   // Driver Version, do not modify!

#if   defined (S32K142)

  #ifdef P256_2KB_SEC
  struct FlashDevice const FlashDevice  =  {
      FLASH_DRV_VERS,                     /* Driver Version, do not modify! */
      "S32K142 256KB PFlash (2KB Sector)",/* Device Name */
      ONCHIP,                             /* Device Type */
      0x00000000,                         /* Device Start Address */
      0x00040000,                         /* Device Size (256kB) */
      1024,                               /* Programming Page Size */
      0,                                  /* Reserved, must be 0 */
      0xFF,                               /* Initial Content of Erased Memory */
      1000,                               /* Program Page Timeout 1000 mSec */
      3000,                               /* Erase Sector Timeout 3000 mSec */
      /* Specify Size and Address of Sectors */
      0x000800, 0x000000,                 /* Sector Size  2kB (128 Sectors) */
      SECTOR_END
  };
  #endif

  #ifdef D64_2KB_SEC
  struct FlashDevice const FlashDevice  =  {
      FLASH_DRV_VERS,                     /* Driver Version, do not modify! */
      "S32K142 64KB FlexNVM (2KB Sector)",/* Device Name */
      ONCHIP,                             /* Device Type */
      0x10000000,                         /* Device Start Address */
      0x00010000,                         /* Device Size (64kB) */
      1024,                               /* Programming Page Size */
      0,                                  /* Reserved, must be 0 */
      0xFF,                               /* Initial Content of Erased Memory */
      1000,                               /* Program Page Timeout 1000 mSec */
      3000,                               /* Erase Sector Timeout 3000 mSec */
      /* Specify Size and Address of Sectors */
      0x000800, 0x000000,                 /* Sector Size  2kB (32 Sectors) */
      SECTOR_END
  };
  #endif

#elif defined (S32K144)

  #ifdef P512_4KB_SEC
  struct FlashDevice const FlashDevice  =  {
      FLASH_DRV_VERS,                     /* Driver Version, do not modify! */
      "S32K144 512KB PFlash (4KB Sector)",/* Device Name */
      ONCHIP,                             /* Device Type */
      0x00000000,                         /* Device Start Address */
      0x00080000,                         /* Device Size (512kB) */
      1024,                               /* Programming Page Size */
      0,                                  /* Reserved, must be 0 */
      0xFF,                               /* Initial Content of Erased Memory */
      1000,                               /* Program Page Timeout 1000 mSec */
      3000,                               /* Erase Sector Timeout 3000 mSec */
      /* Specify Size and Address of Sectors */
      0x001000, 0x000000,                 /* Sector Size  4kB (128 Sectors) */
      SECTOR_END
  };
  #endif

#elif defined (S32K146)

  #ifdef P1024_4KB_SEC
  struct FlashDevice const FlashDevice  =  {
      FLASH_DRV_VERS,                     /* Driver Version, do not modify! */
      "S32K146 1024KB PFlash (4KB Sector)",/* Device Name */
      ONCHIP,                             /* Device Type */
      0x00000000,                         /* Device Start Address */
      0x00100000,                         /* Device Size (1024kB) */
      1024,                               /* Programming Page Size */
      0,                                  /* Reserved, must be 0 */
      0xFF,                               /* Initial Content of Erased Memory */
      1000,                               /* Program Page Timeout 1000 mSec */
      3000,                               /* Erase Sector Timeout 3000 mSec */
      /* Specify Size and Address of Sectors */
      0x001000, 0x000000,                 /* Sector Size  4kB (128 Sectors) */
      SECTOR_END
  };
  #endif

#elif defined (S32K148)

  #ifdef P1536_4KB_SEC
  struct FlashDevice const FlashDevice  =  {
      FLASH_DRV_VERS,                     /* Driver Version, do not modify! */
      "S32K148 1,5MB PFlash (4KB Sector)",/* Device Name */
      ONCHIP,                             /* Device Type */
      0x00000000,                         /* Device Start Address */
      0x00180000,                         /* Device Size (1536kB) */
      1024,                               /* Programming Page Size */
      0,                                  /* Reserved, must be 0 */
      0xFF,                               /* Initial Content of Erased Memory */
      1000,                               /* Program Page Timeout 1000 mSec */
      3000,                               /* Erase Sector Timeout 3000 mSec */
      /* Specify Size and Address of Sectors */
      0x001000, 0x000000,                 /* Sector Size  4kB (384 Sectors) */
      SECTOR_END
  };
  #endif

  #ifdef D512_4KB_SEC
  struct FlashDevice const FlashDevice  =  {
      FLASH_DRV_VERS,                     /* Driver Version, do not modify! */
      "S32K148 512KB DFlash (4KB Sector)",/* Device Name */
      ONCHIP,                             /* Device Type */
      0x10000000,                         /* Device Start Address */
      0x00080000,                         /* Device Size (512kB) */
      1024,                               /* Programming Page Size */
      0,                                  /* Reserved, must be 0 */
      0xFF,                               /* Initial Content of Erased Memory */
      1000,                               /* Program Page Timeout 1000 mSec */
      3000,                               /* Erase Sector Timeout 3000 mSec */
      /* Specify Size and Address of Sectors */
      0x001000, 0x000000,                 /* Sector Size  4kB (128 Sectors) */
      SECTOR_END
  };
  #endif

#endif /* S32K14x */
