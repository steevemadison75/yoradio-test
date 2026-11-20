#ifndef _my_theme_h
#define _my_theme_h

#define ENABLE_THEME
#ifdef  ENABLE_THEME
/*        THEMES                              */
/*        color name             R    G    B   */
#define COLOR_BACKGROUND          0,   0,   0
#define COLOR_STATION_NAME       219, 183, 255      /*  station name  */
#define COLOR_STATION_BG          64,   0, 128      /*  station name background  */
#define COLOR_STATION_FILL        64,   0, 128      /*  station name fill background  */ 
#define COLOR_SNG_TITLE_1          0, 128, 255      /*  first title  */
#define COLOR_SNG_TITLE_2        128, 128, 255      /*  second title  */
#define COLOR_WEATHER            255, 150,   0

#define COLOR_VU_MAX            220,  1, 208 // 255,  14,  14    // red
#define COLOR_VU_MID            146, 96, 211 // 255, 255,   0    // yellow
#define COLOR_VU_MIN            57, 201, 225 // 44, 212,  32    // green
#define COLOR_VU_PEAK           255,  0,  0

#define COLOR_CLOCK             255,   0, 255      /*  clock color  */
#define COLOR_CLOCK_BG             0,  0,  0
#define COLOR_SECONDS           255,   0, 255 

#define COLOR_NAMEDAY             0,   0,   0    // A plus entry is the font color of the name day names.
#define COLOR_DATE                0,   0,   0

#define COLOR_HEAP               41,  40,  41
#define COLOR_BUFFER            200, 145, 255
#define COLOR_IP                4, 122, 255
#define COLOR_VOLBAR_IN          128, 128, 255      /*  volume bar fill  */
#define COLOR_VOLBAR_OUT          64,   0, 128      /*  volume bar outline  */
#define COLOR_VOLUME_VALUE      219, 183, 255
#define COLOR_RSSI              255, 128,   0
#define COLOR_DIGITS             255,   0, 255
#define COLOR_DIVIDER            0,   0,   0
#define COLOR_BITRATE          255,   0, 255 

#define COLOR_PL_CURRENT        255, 255, 255
#define COLOR_PL_CURRENT_BG       4, 122, 255
#define COLOR_PL_CURRENT_FILL     4, 122, 255
#define COLOR_PLAYLIST_0        115, 115, 115
#define COLOR_PLAYLIST_1         89,  89,  89
#define COLOR_PLAYLIST_2         56,  56,  56
#define COLOR_PLAYLIST_3         35,  35,  35
#define COLOR_PLAYLIST_4         25,  25,  25

#endif  /* #ifdef  ENABLE_THEME */
#endif  /* #define _my_theme_h  */
