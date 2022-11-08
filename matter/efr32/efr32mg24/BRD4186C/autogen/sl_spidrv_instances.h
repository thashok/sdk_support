#ifndef SL_SPIDRV_INSTANCES_H
#define SL_SPIDRV_INSTANCES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "spidrv.h"

#define LCD_BIT_RATE     1100000
#define EXP_HDR_BIT_RATE 16000000
#define EFLASH           16000000

enum BAUDRATE_SET {
  BAUDRATE_SET_EXP_HDR = 0,
  BAUDRATE_SET_LCD     = 1,
  BAUDRATE_SET_EFLASH  = 2,
};

extern enum BAUDRATE_SET baudrate_set_t;
void SPI_baudrate_set(uint32_t);
int LCD_baudrate_set(void);
#ifdef RS911X_WIFI
extern SPIDRV_Handle_t sl_spidrv_eusart_exp_handle;
#endif

#ifdef WF200_WIFI
extern SPIDRV_Handle_t sl_spidrv_exp_handle;
#endif

void sl_spidrv_init_instances(void);

#ifdef __cplusplus
}
#endif

#endif // SL_SPIDRV_INSTANCES_H
