//
//  AppConfig.h
//  SportingApp
//
//  Created by System Administrator on 3/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef SportingApp_AppConfig_h
#define SportingApp_AppConfig_h

/* free version
FB:URL_SCHEME_SUFFIX : free
*/

/* paid version.
FB:URL_SCHEME_SUFFIX : paid
*/

#define FreeVersion
#define Debug
//#define MacProSimulator

/*
// Structure & Enum
*/
typedef enum {
    
    TemperatureFormatFahrenheit = 0,

    TemperatureFormatCelsius,
    
} TemperatureFormat;


typedef enum {
    
    WindSpeedFormatMilePerHour = 0,
    
    WindSpeedFormatKilometerPerHour,
    
    WindSpeedFormatMeterPerHour,
    
} WindSpeedFormat;

typedef enum {
    
    WakeUpWindow15Minutes = 15,
    WakeUpWindow20Minutes = 20,
    WakeUpWindow30Minutes = 30,
    
} WakeUpWindow;

typedef enum _alarm_type {
    LightAlarm = 0,
    BackupAlarm = 1,
} AlarmType;

typedef enum _save_notify_type {
   
    SaveAdvanceSettingInfo = 0,
    SaveAlarmArray = 1,
    SaveClockDisplayInfo = 2,
    SaveWeatherSettingInfo = 3,
    SaveSleepAssistInfo = 4
    
} SaveType;

typedef struct {
    
    TemperatureFormat temperatureFormat;
    
    WindSpeedFormat windSpeedFormat;
    
} WeatherSettingInfo;


typedef struct {
    
    int hour;
    
    int minute;
    
} AlarmTime;

/*
// String Format key
*/
#define kSnoozeString @"%d minutes"

#define kMilesPerHour @"%d miles/h"

#define kKiloMeterPerHour @"%d km/h"

#define kMeterPerHour @"%d m/h"

#define kSleepTrackerDurationFormat @"Last %d days"

#define kLightAlarmDescritionFormat @"Light Sleep Cycle Alarm starts at %@"


/*
// Predefined Key
*/
#define NOTIFICATION_LOCATION_UPDATE @"NOTIFICATION_LOCATION_UPDATE"

#define NOTIFICATION_TOUCHEVENT_OCCURE @"receivedTouchedEventFromDevice"

#define MAX_NOTIFICATION_COUNT      63

#define USERINFO_KEY_ALARMINDEX     @"AlarmIndex"

#define USERINFO_KEY_ALARMTYPE      @"AlarmType"

#define USERINFO_KEY_SNOOZE         @"Snooze"

#define USERINFO_KEY_WEEKDAY        @"WeekDay"

#define NOTIFICATION_NAME           @"SavePlistData"


#define kViewBackgroundColor [UIColor colorWithRed:198/255 green:203/255 blue:211/255 alpha:1.0]


#define kFlurryApplicationKey @"DHDRH87N3FVPPVWPCVB8"

#define kFacebookAppID @"602679736427356"
#define kFacebookAppSecret @"a121102a15916159c8bbbdd0105bab73"


#define kAppItunesURL_Free @"https://itunes.apple.com/us/app/puppy-booth-lite-style-your/id583808408?ls=1&mt=8"

#define kAppItunesURL_Paid @"https://itunes.apple.com/us/app/puppy-booth+-style-your-dog/id571238097?ls=1&mt=8"


#define UIAppDelegate ((AppDelegate *)[UIApplication sharedApplication].delegate)

#define DOCUMENTS_DIR_PATH [NSString stringWithFormat:@"%@/Library/Caches/", NSHomeDirectory()]

#define ATTACH_IMAGE_DIR_PATH [DOCUMENTS_DIR_PATH stringByAppendingPathComponent:@"ATTACH_IMAGE"]


#define PLIST_FILE_PATH [NSHomeDirectory() stringByAppendingPathComponent:@"Library/Caches/Settings.plist"]

#define PLIST_FILE_PATH_IN_BUNDLE [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"Settings.plist"]


#define DB_PATH_FREE [NSHomeDirectory() stringByAppendingPathComponent:@"Library/Caches/AlarmClock.sqlite"]

#define DB_PATH_IN_BUNDLE_FREE [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"AlarmClock.sqlite"]


#endif