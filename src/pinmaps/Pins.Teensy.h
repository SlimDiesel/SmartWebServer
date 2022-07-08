// -------------------------------------------------------------------------------------------------
// Pin map for Teensy 3.0, 3.1, 3.2, 3.5, 3.6, 4.0
#pragma once

#define BOOT0_PIN          4   // pin 4, to Boot0 of STM32 etc.

#define AXIS1_ENC_A_PIN    5   // pin# for Axis1 encoder, for A or CW
#define AXIS1_ENC_B_PIN    6   // pin# for Axis1 encoder, for B or CCW
#define AXIS2_ENC_A_PIN    7   // pin# for Axis2 encoder, for A or CW
#define AXIS2_ENC_B_PIN    8   // pin# for Axis2 encoder, for B or CCW

#if AXIS1_ENC > 0 && AXIS2_ENC > 0
  #define VGPIO_PIN_0      OFF
  #define VGPIO_PIN_1      OFF
  #define VGPIO_PIN_2      OFF
  #define VGPIO_PIN_3      OFF
#else
  #define VGPIO_PIN_0      AXIS1_ENC_A_PIN
  #define VGPIO_PIN_1      AXIS1_ENC_B_PIN
  #define VGPIO_PIN_2      AXIS2_ENC_A_PIN
  #define VGPIO_PIN_3      AXIS2_ENC_B_PIN
#endif
#define VGPIO_PIN_4        OFF
#define VGPIO_PIN_5        OFF
#define VGPIO_PIN_6        OFF
#define VGPIO_PIN_7        OFF

#define ETHERNET_RESET_PIN 9   // pin# for controlling the reset of W5500 so it comes up properly

#define LED_STATUS_PIN     11  // pin 11 is the status led

#define SD_CARD_CS_PIN     OFF // pin 4 to CS for SD adapter on Arduino Ethernet Shield
