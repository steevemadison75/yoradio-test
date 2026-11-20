#ifndef dsp_full_loc
#define dsp_full_loc
#include <pgmspace.h>
/*************************************************************************************
    HOWTO:
    Copy this file to yoRadio/locale/displayL10n_custom.h
    and modify it
*************************************************************************************/
const char mon[] PROGMEM = "lu";
const char tue[] PROGMEM = "ma";
const char wed[] PROGMEM = "me";
const char thu[] PROGMEM = "je";
const char fri[] PROGMEM = "ve";
const char sat[] PROGMEM = "sa";
const char sun[] PROGMEM = "di";

const char monf[] PROGMEM = "lundi";
const char tuef[] PROGMEM = "mardi";
const char wedf[] PROGMEM = "mercredi";
const char thuf[] PROGMEM = "jeudi";
const char frif[] PROGMEM = "vendredi";
const char satf[] PROGMEM = "samedi";
const char sunf[] PROGMEM = "dimanche";

const char jan[] PROGMEM = "janvier";
const char feb[] PROGMEM = "fevrier";
const char mar[] PROGMEM = "mars";
const char apr[] PROGMEM = "avril";
const char may[] PROGMEM = "mai";
const char jun[] PROGMEM = "juin";
const char jul[] PROGMEM = "juillet";
const char aug[] PROGMEM = "aout";
const char sep[] PROGMEM = "septembre";
const char octt[] PROGMEM = "octobre";
const char nov[] PROGMEM = "novembre";
const char decc[] PROGMEM = "decembre";

const char wn_N[]      PROGMEM = "NORD";
const char wn_NNE[]    PROGMEM = "NNE";
const char wn_NE[]     PROGMEM = "NE";
const char wn_ENE[]    PROGMEM = "ENE";
const char wn_E[]      PROGMEM = "EST";
const char wn_ESE[]    PROGMEM = "ESE";
const char wn_SE[]     PROGMEM = "SE";
const char wn_SSE[]    PROGMEM = "SSE";
const char wn_S[]      PROGMEM = "SUD";
const char wn_SSW[]    PROGMEM = "SSO";
const char wn_SW[]     PROGMEM = "SO";
const char wn_WSW[]    PROGMEM = "OSO";
const char wn_W[]      PROGMEM = "OUEST";
const char wn_WNW[]    PROGMEM = "ONO";
const char wn_NW[]     PROGMEM = "NO";
const char wn_NNW[]    PROGMEM = "NNO";

const char* const dow[]     PROGMEM = { sun, mon, tue, wed, thu, fri, sat };
const char* const dowf[]    PROGMEM = { sunf, monf, tuef, wedf, thuf, frif, satf };
const char* const mnths[]   PROGMEM = { jan, feb, mar, apr, may, jun, jul, aug, sep, octt, nov, decc };
const char* const wind[]    PROGMEM = { wn_N, wn_NNE, wn_NE, wn_ENE, wn_E, wn_ESE, wn_SE, wn_SSE, wn_S, wn_SSW, wn_SW, wn_WSW, wn_W, wn_WNW, wn_NW, wn_NNW, wn_N };

const char    const_PlReady[]    PROGMEM = "[pret]";
const char  const_PlStopped[]    PROGMEM = "[arret]";
const char  const_PlConnect[]    PROGMEM = "[connexion]";
const char  const_DlgVolume[]    PROGMEM = "* VOLUME *";
const char    const_DlgLost[]    PROGMEM = "* SIGNALE PERDU *";
const char  const_DlgUpdate[]    PROGMEM = "* UPDATING *";
const char const_DlgNextion[]    PROGMEM = "* NEXTION *";
const char const_getWeather[]    PROGMEM = "";
const char  const_waitForSD[]    PROGMEM = "INDEX SD";

const char        apNameTxt[]    PROGMEM = "AP NAME";
const char        apPassTxt[]    PROGMEM = "PASSWORD";
const char       bootstrFmt[]    PROGMEM = "CONNEXION A %s";
const char        apSettFmt[]    PROGMEM = "SETTINGS PAGE ON: HTTP://%s/";

#ifdef WEATHER_FMT_SHORT // Módosítás
const char weatherFmt[] PROGMEM = "%.1f\011C  \007  %d hPa  \007  %d%% RH";
#else
#if EXT_WEATHER
  #ifdef WEATHER_WIND_UNITS_KPH
    const char       weatherFmt[]    PROGMEM = "%s, temperature: %.1f\011C \007 temps ressentit: %.1f\011C \007 pression: %d hPa \007 humidite: %d%% \007 vent: %.0f kph [%s]";
  #else
    const char       weatherFmt[]    PROGMEM = "%s, temperature: %.1f\011C \007 temps ressentit: %.1f\011C \007 pression: %d hPa \007 humidite: %d%% \007 vent: %.0f m/s [%s]";
  #endif
#else
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 pression: %d hPa \007 humidite: %d%%";
#endif
#endif
const char     weatherUnits[]    PROGMEM = "metric";   /* standard, metric, imperial */
const char      weatherLang[]    PROGMEM = "fr";       /* https://openweathermap.org/current#multi */

#endif
