//
//  NSString+Time.h
//  AlarmClock
//
//  Created by Zhenxin on 2/6/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Time)
+ (NSString *)timeFormatted:(int)totalSeconds;
+ (NSString *)totalTime:(int)totalSeconds;
@end
