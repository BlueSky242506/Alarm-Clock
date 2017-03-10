//
//  WeatherManager.h
//  AlarmClock
//
//  Created by Zhenxin on 12/30/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WeatherKit/WeatherKit.h>

@interface WeatherManager : NSObject 
@property (nonatomic, assign) BOOL isReady;
@property (nonatomic, strong) WeatherKit *weatherKit;
@property (nonatomic, strong) UIImage *icon;
@property (nonatomic, strong) NSString *temperature;
@property (nonatomic, strong) NSString *condition;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *windSpeed;

- (void)updateWeatherWithLocation:(CLLocation *)location;
@end