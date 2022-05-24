// Copyright 2022 KristianRoth (@KristianRoth)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT



// customs


/* key matrix size */
#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 7

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS \
    { D7, E6, B4, B5 }
#define MATRIX_COL_PINS \
    { F5, F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW


/* split specifics */
#define USE_I2C
#define EE_HANDS

