#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0xA001
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define PRODUCT         phl
#define DESCRIPTION     test

#define MATRIX_ROWS 2
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { F0, F1 }
#define MATRIX_COL_PINS { D2, D3, D4, D5, D6 }
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5
#define TAP_CODE_DELAY 10
#define PREVENT_STUCK_MODIFIERS

#ifdef RGB_MATRIX_ENABLE
#define DRIVER_ADDR_1 0b0110000
#define DRIVER_ADDR_2 0b0110000
#define DRIVER_COUNT 1
#define DRIVER_1_LED_TOTAL 27
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL)
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_ALL
#endif

#endif
