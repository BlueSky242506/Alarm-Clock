//
//  DBHandler.h
//  SportingApp
//
//  Created by System Administrator on 3/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EGODatabase.h"
#import "AlarmModel.h"

@interface DBHandler : NSObject {
    
	EGODatabase            *mEGODataBase;
	NSString               *mDataBaseNameInBundle;
	NSString               *mDataBasePath;
}

@property (nonatomic, retain) EGODatabase  *mEGODataBase; 
@property (nonatomic, retain) NSString     *mDataBaseNameInBundle;
@property (nonatomic, retain) NSString     *mDataBasePath;

- (BOOL) insertSleepData : (AlarmModel *) alarm wakeUpTime : (NSDate *) time;
- (BOOL) insertAlarmStartDate : (AlarmModel *) alarm setUpTime : (NSDate *) time;
- (BOOL) updateAlarmStartDate : (AlarmModel *) alarm setUpTime : (NSDate *) time;
- (BOOL) existAlarmStartDate : (AlarmModel *) alarm;
- (NSInteger) getAlarmStartDate : (NSInteger) alarmIndex;
- (NSDate *) getLastSleepInBedTime : (NSDate *)currentDate;
- (int) getLastSleepingAlarmIndex : (NSDate *) currentDate;
- (int) getLastSleepingDelay : (NSInteger) alarmIndex;
- (NSDate *) getLastSleepInAwakeTime : (NSDate *) currentDate;
- (int) getLastSleepingTime : (NSDate *) wakeUpTime;
- (NSInteger) getTotalSleepingTimeSecond : (NSDate *) currentDate days : (NSInteger) day;
- (NSInteger) getAverageTimeSleeping : (NSDate *) currentDate days : (NSInteger) day;
- (NSInteger) getLongestNightSleepTime : (NSDate *) currentDate days : (NSInteger) day;
- (NSInteger) getShortestNightSleepTime : (NSDate *) currentDate days : (NSInteger) day;

@end
