// -----------------------------------------------------------------------------------
// Configuration defaults
#pragma once

// use the HAL specified default NV driver
#ifndef NV_DRIVER
#define NV_DRIVER                     NV_DEFAULT
#endif

// Wifi related
#ifndef STA_AP_FALLBACK
#define STA_AP_FALLBACK               true    // activate SoftAP if station fails to connect
#endif

#ifndef STA_AUTO_RECONNECT
#define STA_AUTO_RECONNECT            true    // automatically reconnect if connection is dropped
#endif

// onstep reset control related
#ifndef RESET_PIN
#define RESET_PIN                     OFF
#endif

#ifndef RESET_PIN_STATE
#define RESET_PIN_STATE               LOW
#endif

// background ajax page update timing (in milliseconds, 50ms minimum)
#ifndef AJAX_PAGE_UPDATE_RATE_MS
#define AJAX_PAGE_UPDATE_RATE_MS      500     // normal ajax page update update rate
#endif

#ifndef STATE_POLLING_RATE_MS
#define STATE_POLLING_RATE_MS         500     // time between updates for most OnStep state information
#endif

// background scanning of OnStep state (in milliseconds, 200ms minimum)
#ifndef STATE_SLOW_POLLING_RATE_MS
#define STATE_SLOW_POLLING_RATE_MS    1000    // as above except for less critical items
#endif

#ifndef STATE_FAST_POLLING_RATE_MS
#define STATE_FAST_POLLING_RATE_MS    500     // as above except for more critical items
#endif

#ifndef STATE_GPIO_POLLING_RATE_MS
#define STATE_GPIO_POLLING_RATE_MS    100     // time between updates of OnStep GPIO pin state
#endif

// encoders
#ifndef ENC_AUTO_SYNC_DEFAULT
#define ENC_AUTO_SYNC_DEFAULT         ON      // automatically sync Encoders to OnStep
#endif
#ifndef ENC_AUTO_SYNC_MEMORY
#define ENC_AUTO_SYNC_MEMORY          OFF     // remember automatic sync setting across power cycles
#endif
#ifndef ENC_SYNC_DURING_GOTO
#define ENC_SYNC_DURING_GOTO          OFF     // high resolution encoders correct pointing even during an align
#endif

#ifndef AXIS1_ENCODER
#define AXIS1_ENCODER                 OFF     // AB, AB_ESP32, CW_CCW, PULSE_DIR, AS37_H39B_B. RA/Azm (A/MA) & (B/SLO)
#endif
#ifndef AXIS1_ENCODER_TICKS_DEG
#define AXIS1_ENCODER_TICKS_DEG       22.222  // encoder ticks per degree
#endif
#ifndef AXIS1_ENCODER_REVERSE
#define AXIS1_ENCODER_REVERSE         OFF     // reverse the count direction
#endif
#ifndef AXIS1_ENCODER_DIFF_LIMIT_TO
#define AXIS1_ENCODER_DIFF_LIMIT_TO   0       // minimum diff. between encoder/OnStep for sync. to OnStep
#endif
#ifndef AXIS1_ENCODER_DIFF_LIMIT_FROM
#define AXIS1_ENCODER_DIFF_LIMIT_FROM 0       // maximum diff. between encoder/OnStep for sync. from OnStep
#endif

#ifndef AXIS2_ENCODER
#define AXIS2_ENCODER                 OFF     // AB, AB_ESP32, CW_CCW, PULSE_DIR, AS37_H39B_B. RA/Azm (A/MA) & (B/SLO)
#endif
#ifndef AXIS2_ENCODER_TICKS_DEG
#define AXIS2_ENCODER_TICKS_DEG       22.222  // encoder ticks per degree
#endif
#ifndef AXIS2_ENCODER_REVERSE
#define AXIS2_ENCODER_REVERSE         OFF     // reverse the count direction
#endif
#ifndef AXIS2_ENCODER_DIFF_LIMIT_TO
#define AXIS2_ENCODER_DIFF_LIMIT_TO   0       // minimum diff. between encoder/OnStep for sync. to OnStep
#endif
#ifndef AXIS2_ENCODER_DIFF_LIMIT_FROM
#define AXIS2_ENCODER_DIFF_LIMIT_FROM 0       // maximum diff. between encoder/OnStep for sync. from OnStep
#endif

// AS37 absolute encoder
//#define AS37_SINGLE_TURN                    // uncomment to enable AS37 single turn mode (no multi-turn count)
#ifndef AS37_CLOCK_RATE_KHZ
#define AS37_CLOCK_RATE_KHZ           4000    // error rate is: ~2.0% at 500 KHz, ~0.5% @ 2000 KHz, ~0.01% at 4000KHz
#endif
