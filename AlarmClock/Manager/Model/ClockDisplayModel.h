//
//  ClockDisplayModel.h
//  AlarmClock
//
//  Created by Zhenxin on 1/9/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum {
    ClockStyleLCD = 0,
    ClockStyleFlip = 1,
} ClockStyle;

typedef enum {
    ClockColorBlue = 0,
    ClockColorCyan = 1,
    ClockColorGreen = 2,
    ClockColorOrange = 3,
    ClockColorPink = 4,
    ClockColorRed = 5,
    ClockColorYellow = 6,
} ClockColor;

@interface ClockDisplayModel : NSObject
@property (nonatomic, assign) ClockStyle clockStyle;
@property (nonatomic, assign) ClockColor clockColor_LCD;
@property (nonatomic, assign) BOOL isShowSecond_LCD;
@property (nonatomic, assign) BOOL isShowDate_LCD;
@property (nonatomic, assign) BOOL isShowWeather_LCD;
@property (nonatomic, assign) BOOL isShowNextAlarm_LCD;
@property (nonatomic, assign) BOOL is24TimeFormat_LCD;
@property (nonatomic, assign) CGFloat brightness_LCD;
@property (nonatomic, assign) BOOL isBrightnessByFinger_LCD;
@property (nonatomic, assign) BOOL isShowDate_Flip;
@property (nonatomic, assign) BOOL isShowWeather_Flip;
@property (nonatomic, assign) BOOL isShowNextAlarm_Flip;
@property (nonatomic, assign) BOOL is24TimeFormat_Flip;
@end
