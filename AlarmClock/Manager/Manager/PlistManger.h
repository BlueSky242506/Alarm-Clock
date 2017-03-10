//
//  PlistManger.h
//  AlarmClock
//
//  Created by Zhenxin on 1/15/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ClockDisplayModel.h"
#import "WeatherModel.h"

@interface PlistManger : NSObject

@property (nonatomic, strong) NSMutableArray *alarmArray;

@property (nonatomic, strong) ClockDisplayModel *clockDisplayInfo;

@property (nonatomic, strong) WeatherModel *weatherSettingInfo;

@property (nonatomic, assign) BOOL flashlightWhenDoubleTap;

@property (nonatomic, assign) BOOL morningRiseWhenAlarmSet;

@property (nonatomic, assign) NSInteger postponeTimeAutoLockWhenOnBattery;

@property (nonatomic, assign) NSInteger postponeTimeAutoLockWhenPluggedIn;

@property (nonatomic, assign) NSInteger sleepTrackerDateRange;

+ (PlistManger *)sharedManager;

- (NSMutableArray *)getLCDClockColorTitles;

- (NSMutableArray *)getLCDClockColorHexValues;

- (NSMutableArray *)getBackupAlarmSounds;

- (NSMutableArray *)getLightSleepAlarmSounds;

- (void)saveAlarmArray;

- (void)saveClockDisplayInfo;

- (void)saveWeatherSettingInfo;

- (void)saveAdvanceSettingInfo;

@end
