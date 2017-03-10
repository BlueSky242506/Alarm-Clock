//
//  SleepAssistManager.h
//  AlarmClock
//
//  Created by Zhenxin on 1/12/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SleepAssistManager : NSObject {

    NSTimer *timer;
}

@property (nonatomic, assign) NSInteger durationMinutes;

@property (nonatomic, assign) CGFloat volume;

@property (nonatomic, assign) BOOL isFadeOut;

@property (nonatomic, assign) NSInteger soundIndex;

@property (nonatomic, assign) BOOL isPlayiPodMusic;

@property (nonatomic, assign) BOOL isShuffleMusic;

@property (nonatomic, strong) NSMutableArray *iPodPlayList;

@property (nonatomic, assign) BOOL isPlaying;


- (void)getSleepAssistInfo;

- (void)saveSleepAssistInfo;

- (void)startSleepAssist;

- (void)stopSleepAssist;

@end
