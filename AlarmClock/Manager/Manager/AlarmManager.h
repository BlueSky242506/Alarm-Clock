//
//  AlarmManager.h
//  AlarmClock
//
//  Created by Zhenxin on 2/5/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>


@class AlarmModel;
@interface AlarmManager : NSObject {
    
}

-(AlarmModel *)getNotifAlarmFromAlarmModel:(AlarmModel *)alarm AlarmType:(int)alarmType WeekDay:(int)weekDay;
-(void)addSnoozeNotification:(UILocalNotification *)notify repeatInterVal:(int)repeatInterval;
-(void)cancelSnoozeNotification;
-(void)cancelNotification:(NSInteger)alarmIndex;
-(void)addNotification:(AlarmModel *)alarm;
-(void)cancelBackupNotification:(NSInteger)alarmIndex currentWeekDay:(NSInteger)weekDay;
-(void)updateNotificationFireDate:(UILocalNotification *)notification;
-(void)resetNotification;
-(NSMutableArray *)getSortNotificationList:(int)currentWeekDay currentTime:(int)curTime;
-(NSDate *)getFirstFireDate;
+ (double) getTimeDifferenceBetweenDates : (NSDate *) inBedTime wakeUpTime : (NSDate *) wakeUpTime;
+ (AlarmModel *) getAlarmModelByAlarmIndex : (NSInteger) alarmIndex;
+(void)increaseAlarmUniqueIndex;
+(NSInteger)getAlarmUniqueIndex;
@end
