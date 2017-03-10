//
//  WeatherModel.h
//  AlarmClock
//
//  Created by Zhenxin on 1/28/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeatherModel : NSObject
@property (nonatomic, strong) NSString *weatherCity;
@property (nonatomic, assign) double cityLatitude;
@property (nonatomic, assign) double cityLogitude;
@property (nonatomic, assign) NSInteger temperatureUnit;
@property (nonatomic, assign) NSInteger windUnit;
@end
