// Wurkkos TS11, like a TS25  but with a RGB button and RGB front aux
// Copyright (C) 2023 Selene ToyKeeper
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "wurkkos/ts25/anduril.h"

// this light has three aux LED channels: R, G, B
#define USE_AUX_RGB_LEDS

// turn on the aux LEDs while main LEDs are on
// (but not until the main LEDs are bright enough to overpower the aux)
// (setting this lower makes an annoying effect on some levels)
#define USE_AUX_RGB_LEDS_WHILE_ON  50
#define USE_INDICATOR_LED_WHILE_RAMPING

// my changes
//
// at Wurkkos's request, reduce the Simple UI ceiling a little bit
// (i.e. not 150; original config had it at 144/150, or DD FET 204/255)
// 20 47 [75] 102 130
// 10 30 50 70 [90] 110 130
#undef SIMPLE_UI_FLOOR
#undef SIMPLE_UI_CEIL
#undef SIMPLE_UI_STEPS
#define SIMPLE_UI_FLOOR  1
#define SIMPLE_UI_CEIL   130
#define SIMPLE_UI_STEPS  7

// disable 3C to toggle between smooth and stepped ramping in Simple UI (can still toggle in Advanced UI)
#undef USE_SIMPLE_UI_RAMPING_TOGGLE

// enable 2 click turbo in Simple UI (Anduril 1 style)
#define DEFAULT_2C_STYLE_SIMPLE 1

// set default RGB led off behavior to low, blue
#define RGB_LED_OFF_DEFAULT 0x14

// set default RGB led lockout behavior to low, red
#define RGB_LED_LOCKOUT_DEFAULT 0x10

// disable post_off_voltage by default
#define DEFAULT_POST_OFF_VOLTAGE_SECONDS 0
