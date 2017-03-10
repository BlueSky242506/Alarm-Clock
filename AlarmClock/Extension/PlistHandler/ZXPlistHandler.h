//
//  ZXPlistHandler.h
//  AlarmClock
//
//  Created by Zhenxin on 1/8/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZXPlistHandler : NSObject

@property (nonatomic, readwrite) NSMutableDictionary *plist;

+ (id)sharedInstanceWithResourcePath:(NSString *)path;

- (id)objectForKey:(NSString *)key forSection:(NSString *)firstSection, ... NS_REQUIRES_NIL_TERMINATION;

- (void)setObject:(id)object forKey:(NSString *)key forSection:(NSString *)firstSection, ... NS_REQUIRES_NIL_TERMINATION;

- (void)save;

@end
