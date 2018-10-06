#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1337
#define PRODUCT_ID      0x0001
#define DEVICE_VER 		0x0001
#define MANUFACTURER    DarkRak3r
#define PRODUCT         4Key
#define DESCRIPTION     DarkRak3r 4Key

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

#define MATRIX_ROW_PINS { B4, B5 }
#define MATRIX_COL_PINS { D7, E6 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010000 // this is here for compliancy reasons.

#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 4
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL

#endif