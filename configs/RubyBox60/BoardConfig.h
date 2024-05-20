/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef RUBYBOX60_CONFIG_H_
#define RUBYBOX60_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "RubyBox60"

// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_RIGHT  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_LEFT   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_15 GpioAction::BUTTON_PRESS_R1     // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_S1     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_29 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
//#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_R3     // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_28 GpioAction::BUTTON_PRESS_A1     // A1     | Guide  | Home    | PS       | 13     | ~      |
//#define GPIO_PIN_15 GpioAction::BUTTON_PRESS_A2     // A2     | ~      | Capture | ~        | 14     | ~      |

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_Z             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#define BUTTON_LAYOUT BUTTON_LAYOUT_BONGO_CAT
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_BLANKB

#define HAS_I2C_DISPLAY 1
#define I2C0_ENABLED 1
#define I2C0_PIN_SDA 4
#define I2C0_PIN_SCL 1

#define DEFAULT_SPLASH \
  0x00,0x00,0x00,0x1F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x00,0x00,0x70,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x00,0x01,0xC0,0x00,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x00,0x03,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x00,0x3E,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x00,0xE0,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x01,0x80,0x00,0x7F,0xF0,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x07,0x00,0x03,0xFF,0xFE,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x04,0x00,0x1F,0xFF,0xFF,0xC3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x0C,0x00,0x3F,0xFF,0xFF,0xF1,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x18,0x00,0x7F,0xF0,0x00,0xF8,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x30,0x01,0xFF,0x00,0x00,0x04,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x60,0x03,0xE0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x40,0x07,0x80,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0xC0,0x0C,0x00,0x00,0x00,0x00,0x02,0x1F,0xF7,0xF3,0xF1,0xFC,0xFE,0x00,0x00, \
  0x00,0x80,0x10,0x00,0x00,0x00,0x00,0x03,0x11,0x1C,0x56,0x1B,0x07,0x83,0x00,0x00, \
  0x00,0x80,0x00,0x00,0x02,0x00,0x00,0x01,0x10,0x0C,0x1C,0x0E,0x03,0x01,0x00,0x00, \
  0x01,0x80,0x00,0x00,0x0F,0x00,0x60,0x01,0x91,0x8C,0x18,0xC6,0x33,0x19,0x00,0x00, \
  0x01,0x00,0x00,0x00,0x1F,0x00,0x70,0x00,0x91,0x8C,0x78,0xC6,0x33,0x19,0x00,0x00, \
  0x01,0x00,0x00,0x00,0x3F,0x80,0x30,0x00,0x91,0x8C,0x48,0x06,0x1F,0x0F,0x00,0x00, \
  0x01,0x00,0x00,0x00,0x7F,0x80,0x38,0x00,0x91,0x8C,0x48,0x07,0x07,0x83,0x00,0x00, \
  0x01,0x00,0x00,0x00,0xFF,0x80,0x3C,0x00,0x91,0x8C,0x48,0xFF,0x83,0xC1,0x00,0x00, \
  0x03,0x00,0x00,0x00,0xFF,0x80,0x3C,0x00,0x91,0x8C,0x48,0xC7,0xC3,0xE1,0x00,0x00, \
  0x02,0x00,0x00,0x00,0xFF,0x80,0x1E,0x00,0x91,0x8C,0x48,0xC6,0x63,0x31,0x00,0x00, \
  0x02,0x00,0x00,0x00,0xFF,0x80,0x1E,0x00,0x91,0x8C,0x48,0xC6,0x63,0x31,0x00,0x00, \
  0x02,0x00,0x00,0x01,0xFF,0x80,0x1F,0x00,0x90,0x0C,0x4C,0x0E,0x03,0x01,0x00,0x00, \
  0x02,0x00,0x00,0x01,0xFF,0x80,0x1F,0x00,0x91,0x1C,0x46,0x1B,0x07,0x83,0x00,0x00, \
  0x02,0x00,0x00,0x01,0xFF,0xE0,0x1F,0x81,0x91,0xF7,0xC3,0xF1,0xFC,0xFE,0x00,0x00, \
  0x03,0x00,0x00,0x01,0xFF,0xE0,0x3F,0x81,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x01,0x00,0x00,0x03,0xFF,0xE0,0x3F,0xC1,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x01,0x00,0x00,0x03,0xFF,0xE0,0x3F,0xC1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x01,0x80,0x00,0x07,0xF8,0xE0,0x43,0xC1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x80,0x00,0x0F,0x80,0xE0,0x00,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x80,0x00,0x1F,0x1F,0xE0,0xFC,0x83,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x80,0x00,0x1F,0xFF,0xC1,0xFF,0xC6,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x80,0x00,0x1F,0xFF,0xC3,0xFF,0xCC,0x11,0x00,0x01,0xF7,0xC0,0x00,0x00,0x00, \
  0x03,0x80,0x00,0x0F,0xFE,0x0F,0xFF,0xC4,0x11,0x00,0x01,0x14,0x40,0x00,0x00,0x00, \
  0x0E,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xE6,0x11,0xF7,0xFF,0x1C,0x77,0xE7,0xFC,0xFE, \
  0x18,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xE3,0x11,0x1C,0x62,0x00,0x1C,0x34,0x47,0x83, \
  0x70,0x00,0x00,0x03,0xFE,0xF1,0xBF,0xF1,0x90,0x0C,0x62,0x00,0x18,0x1C,0x03,0x01, \
  0x40,0x00,0x00,0x03,0xFF,0x0E,0x7F,0xF0,0x91,0x8C,0x63,0x1C,0x71,0x8C,0x63,0x19, \
  0x40,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xF0,0xD1,0x8C,0x63,0x1C,0x71,0x8C,0x63,0x19, \
  0x40,0x00,0xC0,0x01,0xFF,0xFF,0xFF,0xE0,0x51,0x8C,0x63,0x1C,0x71,0x8C,0x63,0x0F, \
  0x40,0x01,0xE0,0x00,0xFF,0xFF,0xFF,0xE0,0x51,0x8C,0x63,0x1C,0x71,0x8C,0x63,0x83, \
  0xC0,0x00,0xF0,0x00,0xFF,0xFF,0xFF,0xC0,0x51,0x8C,0x63,0x1C,0x71,0x8C,0x63,0xC1, \
  0x80,0x00,0xF8,0x00,0xFF,0xFF,0xFF,0x80,0x51,0x8C,0x63,0x1C,0x71,0x8C,0x63,0xE1, \
  0x80,0x00,0x70,0x01,0xFF,0xFF,0xFF,0x00,0xD1,0x8C,0x63,0x1C,0x71,0x8C,0x63,0x31, \
  0x80,0x00,0x10,0x03,0xFF,0xFF,0xFE,0x00,0x91,0x8C,0x63,0x1C,0x71,0x8C,0x63,0x31, \
  0xC0,0x00,0x00,0x1F,0xFF,0xFF,0xF0,0x00,0x90,0x0C,0x03,0x04,0x10,0x1C,0x63,0x01, \
  0x40,0x00,0x40,0x3F,0xFF,0xFF,0x0C,0x01,0x11,0x1E,0x23,0x86,0x1C,0x34,0x63,0x83, \
  0x40,0x00,0x60,0x0F,0xFF,0xE0,0xFC,0x07,0x1F,0xF3,0xFE,0xFF,0xF7,0xE7,0xFE,0xFE, \
  0x60,0x00,0x70,0x09,0xF8,0x1F,0x84,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x20,0x00,0x78,0x0F,0xFE,0x70,0x06,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x38,0x80,0x60,0x07,0xFF,0x18,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x0F,0xFC,0x5E,0x03,0xFF,0x4C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x38,0x3F,0x01,0xFC,0xC4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x60,0x7B,0x02,0x23,0xC6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x40,0xFC,0x87,0xFF,0xC3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0xC5,0xFE,0x07,0xFF,0xCD,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x89,0xFF,0xC3,0xFF,0x8D,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x8B,0xFF,0xE3,0xFF,0x8E,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0xC7,0xFF,0xE1,0xFE,0x0F,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x67,0xFF,0xF0,0x00,0x0F,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
  0x00,0x37,0xFF,0xF0,0x00,0x07,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

#endif