#ifndef myoptions_h
#define myoptions_h

#define L10N_LANGUAGE       EN

// DISPLAY
#define DSP_MODEL			      DSP_GC9A01A
#define DSP_HSPI			      false
#define TFT_DC              4
#define TFT_RST             14
#define TFT_CS              13
#define BRIGHTNESS_PIN			15
//#define DEF_SPI_FREQ        60000000UL
#define USE_FBUFFER         true

// I2S DAC
#define I2S_DOUT            27
#define I2S_BCLK            26
#define I2S_LRC             25
#define VS1053_CS           255

// SPDIF
#define SPDIF_OUT           255

// SD/IR/Misc
#define SDC_CS              5
//#define SD_SPIPINS  18, 19, 23      /* SCK, MISO, MOSI */
#define SD_HSPI             false /* use HSPI for SD (miso=12, mosi=13, clk=14) instead of VSPI (by default)  */

#define IR_PIN              32
#define IR_TIMEOUT          15
#define IR_TS_BRIGHTNESS_CONTROL

#define DECODE_HASH         false
#define CLOCK_TTS_ENABLED   false     // Enabled (true) or disabled (false)
#define NO_VOLUME_SCREEN
#define VU_PEAK
#define POWER_SAVE          2         // 0=off, 1=on sleep, 2=always
#define WAKEUP_REBOOT
#define WEATHER_WIND_UNITS_KPH
//#define BOOMBOX_STYLE 

// Autobacklight setup
//#define LIGHT_SENSOR        35        // lower pin voltage = higher brightness
#define AUTOBACKLIGHT_DARK  4000      // max ADC value - at dark condition (0 - 4095)
#define AUTOBACKLIGHT_BRI   100       // min ADC value - at bright condition (0 - 4095)
#define AUTOBACKLIGHT_MIN   15        // min brightness [%] (0 - 100)
//#define ADC_RAW_DEBUG

#define BTN_LEFT              22             /*  Volume Down, Previous */
#define BTN_CENTER            21             /*  Play, Stop, Show playlist, Mode if SD-Card is enable */
#define BTN_RIGHT             2              /*  Volume Up, Next */
#define BTN_UP                35             /*  Previous, Move Up */
#define BTN_DOWN              34             /*  Next, Move Down */
#define WAKE_PIN              21

#define BTN_INTERNALPULLUP    true           /*  Enable the weak pull up resistors. Default is "true" */
#define ENC_INTERNALPULLUP    false          /*  Enable the weak pull up resistors. Default is "true"  */
#define ENC2_INTERNALPULLUP   false          /*  Enable the weak pull up resistors. Default is "true"  */


#endif
