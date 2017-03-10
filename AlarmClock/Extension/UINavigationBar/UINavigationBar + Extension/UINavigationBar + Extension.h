//
//  UINavigationBar + Extension.h
//  Reminder
//
//  Created by System Administrator on 3/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

// Define Bar Image Customize macro

#define kSecondWayToSetImagetoNavBar 1


// Custom Bar Item With Static Image And Random String

#define APPCustomNavigationBarStyleBlackImage   @"NavigationBar(Black).png"

typedef enum {
    
    APPCustomNavigationBarStyleBlack = 0,
    
}APPCustomNavigationBarStyle;


@interface UINavigationBar(Extension)


// Bar With Static Image + Random String

+ (void)customizeBarWithImage:(id)obj style:(APPCustomNavigationBarStyle)t title:(NSString *)title;

// Bar With Random Tint Color + Random String

+ (void)customizeBarWithTintColor:(id)obj color:(UIColor *)color title:(NSString *)title;

// Bar With Random Title

+ (void)customizeNaviationBarTitle:(id)obj title:(NSString *)title;


@end
