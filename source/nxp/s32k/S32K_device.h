#ifndef S32K_DEVICE_H_
#define S32K_DEVICE_H_

#include <stdint.h>

/* one block for each device/algorithm */
/*-----------------------------------------------------------------------*/
#if   defined (S32K142)
  static __inline void Watchdog_Disable(void) {
    (*((volatile uint32_t *)(0x40052004U))) = 0xD928C520U;  /* WDOG->CNT = WDOG_UPDATE_KEY; */
    (*((volatile uint32_t *)(0x40052008U))) = 0xFFFFU;      /* WDOG->TOVAL = 0xFFFF; */
    (*((volatile uint32_t *)(0x40052000U))) = 0x2120U;      /* WDOG->CS = ; */
  }

  static __inline void RunMode_Set(void) {
    /* Disable cache to ensure that all flash operations will take effect instantly (this is device dependent) */
    (*((volatile uint32_t *)(0x40001400U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001404U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001408U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x4000140CU))) |= 0x0FFU;
  }

  /* destination to program security key back to flash location */
  #define SECURITY_LOCATION             0x408               /* because we write 8 Bytes */
//#define SECURITY_LOCATION             0x40C               /* because we write 4 Bytes */
  #define SECURITY_SIZE                 FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE

#elif defined (S32K144)
  static __inline void Watchdog_Disable(void) {
    (*((volatile uint32_t *)(0x40052004U))) = 0xD928C520U;  /* WDOG->CNT = WDOG_UPDATE_KEY; */
    (*((volatile uint32_t *)(0x40052008U))) = 0xFFFFU;      /* WDOG->TOVAL = 0xFFFF; */
    (*((volatile uint32_t *)(0x40052000U))) = 0x2120U;      /* WDOG->CS = ; */
  }

  static __inline void RunMode_Set(void) {
    /* Disable cache to ensure that all flash operations will take effect instantly (this is device dependent) */
    (*((volatile uint32_t *)(0x40001400U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001404U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001408U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x4000140CU))) |= 0x0FFU;
  }

  /* destination to program security key back to flash location */
  #define SECURITY_LOCATION             0x408               /* because we write 8 Bytes */
//#define SECURITY_LOCATION             0x40C               /* because we write 4 Bytes */
  #define SECURITY_SIZE                 FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE

#elif defined (S32K146)
  static __inline void Watchdog_Disable(void) {
    (*((volatile uint32_t *)(0x40052004U))) = 0xD928C520U;  /* WDOG->CNT = WDOG_UPDATE_KEY; */
    (*((volatile uint32_t *)(0x40052008U))) = 0xFFFFU;      /* WDOG->TOVAL = 0xFFFF; */
    (*((volatile uint32_t *)(0x40052000U))) = 0x2120U;      /* WDOG->CS = ; */
  }

  static __inline void RunMode_Set(void) {
    /* Disable cache to ensure that all flash operations will take effect instantly (this is device dependent) */
    (*((volatile uint32_t *)(0x40001400U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001404U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001408U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x4000140CU))) |= 0x0FFU;
  }

  /* destination to program security key back to flash location */
  #define SECURITY_LOCATION             0x408               /* because we write 8 Bytes */
//#define SECURITY_LOCATION             0x40C               /* because we write 4 Bytes */
  #define SECURITY_SIZE                 FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE

#elif defined (S32K148)
  static __inline void Watchdog_Disable(void) {
    (*((volatile uint32_t *)(0x40052004U))) = 0xD928C520U;  /* WDOG->CNT = WDOG_UPDATE_KEY; */
    (*((volatile uint32_t *)(0x40052008U))) = 0xFFFFU;      /* WDOG->TOVAL = 0xFFFF; */
    (*((volatile uint32_t *)(0x40052000U))) = 0x2120U;      /* WDOG->CS = ; */
  }

  static __inline void RunMode_Set(void) {
    /* Disable cache to ensure that all flash operations will take effect instantly (this is device dependent) */
    (*((volatile uint32_t *)(0x40001400U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001404U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x40001408U))) |= 0x0FFU;
    (*((volatile uint32_t *)(0x4000140CU))) |= 0x0FFU;
  }

  /* destination to program security key back to flash location */
  #define SECURITY_LOCATION             0x408               /* because we write 8 Bytes */
//#define SECURITY_LOCATION             0x40C               /* because we write 4 Bytes */
  #define SECURITY_SIZE                 FEATURE_FLS_PF_BLOCK_WRITE_UNIT_SIZE

#else
  #error "flash_device not configured."
#endif

#endif /* #if S32K_DEVICE_H_ */
