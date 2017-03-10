//
//  AlarmModel.h
//  AlarmClock
//
//  Created by Zhenxin on 12/11/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppConfig.h"

@interface AlarmModel : NSObject

@property (nonatomic, strong) NSString *alarmName;

@property (nonatomic, assign) BOOL lightalarm_enable;
@property (nonatomic, assign) int lightalarm_time;
@property (nonatomic, assign) int lightalarm_sound_index;
@property (nonatomic, assign) BOOL lightalarm_sound_shuffe;
@property (nonatomic, assign) BOOL lightalarm_sound_playiPodMusic;
@property (nonatomic, strong) NSMutableArray *lightalarm_sound_ipodmusics;
@property (nonatomic, assign) int lightalarm_sound_wakeupwindow;

@property (nonatomic, assign) BOOL backupalarm_enable;
@property (nonatomic, assign) int backupalarm_time;
@property (nonatomic, assign) int backupalarm_sound_index;
@property (nonatomic, assign) BOOL backupalarm_sound_shuffe;
@property (nonatomic, assign) BOOL backupalarm_sound_playiPodMusic;
@property (nonatomic, strong) NSMutableArray *backupalarm_ipodmusics;
@property (nonatomic, assign) CGFloat backupalarm_sound_volume;
@property (nonatomic, assign) BOOL backupalarm_snooze_enable;
@property (nonatomic, assign) int backupalarm_snooze_duration;
@property (nonatomic, strong) NSMutableArray *backupalarm_repeats;
@property (nonatomic, assign) NSInteger alarmUniqueIndex;

// only used for Notification
@property (nonatomic, assign) NSInteger notifyType;
@property (nonatomic, assign) int notifTime;
@property (nonatomic, assign) NSInteger notifWeekDay;

-(BOOL)isOptionNeverValue;


@end
