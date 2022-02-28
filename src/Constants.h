// -----------------------------------------------------------------------------------
// Constants
#pragma once

// misc.
#define PROD_ABV                     "SWS"

#define METRIC                       ON
#define IMPERIAL                     -200
#define LOCALE_DEFAULT               -201
#define AUTO_ON                      -202
#define AUTO_OFF                     -203
#define FWU                          -204

// encoder types
#define AB                           1
#define CWCCW                        2
#define BC_BISSC                     3

#define DEFAULT_AJAX_RATE            "1"       // normally 2 seconds between updates
#define DEFAULT_FAST_AJAX_RATE       "0.5"     // fast update is 1 second/update
#define DEFAULT_AJAX_SHED_TIME       "15"      // time before return to normal update rate

// various auxillary features
#define SWITCH                       1
#define ANALOG_OUTPUT                2
#define DEW_HEATER                   3
#define INTERVALOMETER               4

// The settings below are for initialization only, afterward they are stored and recalled from EEPROM and must
// be changed in the web interface OR with a reset (for initialization again) as described in the Config.h comments
#define TIMEOUT_WEB                  200
#define TIMEOUT_CMD                  200

// task manager
#define TASKS_MAX                   32     // up to 32 tasks
#define TASKS_SKIP_MISSED

// EEPROM contents
#define INIT_NV_KEY                  698623879UL

#define NV_TIMEOUT_CMD               5      // 2 bytes
#define NV_TIMEOUT_WEB               7      // 2 bytes
#define NV_ETHERNET_SETTINGS_BASE    100    // 88 bytes
#define NV_WIFI_SETTINGS_BASE        200    // 427 bytes
#define NV_ENCODER_SETTINGS_BASE     700    // 88 bytes
