//
//  UINavigationBar + Extension.h
//  Reminder
//
//  Created by System Administrator on 3/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

// Custom Bar Item With Static Image And Static String

#define APPCustomBackBarItemStlyeBackImage          @"BackButton(Back).png"

#define APPCustomRightBarItemStlyeNextImage       @"RightButton(Next).png"

#define APPCustomRightBarItemStlyeInfoImage         @"RightButton(Info).png"

typedef enum {
    
    APPCustomBackBarItemStlyeBack = 0,
    
} APPCustomBackBarItemStlye;

typedef enum {
    
    APPCustomRightBarItemStlyeNext = 0,
    
    APPCustomRightBarItemStlyeInfo = 1,
    
} APPCustomRightBarItemStlye;



// Custom Bar Item With Static Image And Random String

#define APPCustomBackBarItemStlyeBlackBackImage   @"SingleColorBackButton(Black).png"

#define APPCustomBackBarItemStlyeRedBackImage     @"SingleColorBackButton(Red).png"

#define APPCustomRightBarItemStlyeBlackBackImage  @"SingleColorRightButton(Black).png"

typedef enum {
    
    APPCustomBackBarItemSingleColorStlyeBlack = 0,
    
}APPCustomBackBarItemSingleColorStlye;

typedef enum {
    
    APPCustomRightBarItemSingleColorStlyeBlack = 0,
    
}APPCustomRightBarItemSingleColorStlye;



@interface UINavigationItem(Extension)

// Bar Item With Static Image + Static String

+ (void)customizeBackBarItem:(id)obj sel:(SEL)sel style:(APPCustomBackBarItemStlye)t;

+ (void)customizeRightBarItem:(id)obj sel:(SEL)sel style:(APPCustomRightBarItemStlye)t;


// Bar Item With Static Image + Random String

+ (void)customizeBackBarItemWithImage:(id)obj sel:(SEL)sel style:(APPCustomBackBarItemSingleColorStlye)t title:(NSString *)title;

+ (void)customizeRightBarItemWithImage:(id)obj sel:(SEL)sel style:(APPCustomRightBarItemSingleColorStlye)t title:(NSString *)title;

// Bar Item With Random Tint Color + Random String

+ (void)customizeBackBarItemWithString:(id)obj sel:(SEL)sel title:(NSString *)title;

+ (void)customizeRightBarItemWithString:(id)obj sel:(SEL)sel title:(NSString *)title;

@end
