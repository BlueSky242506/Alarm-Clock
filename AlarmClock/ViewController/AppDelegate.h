//
//  AppDelegate.h
//  AlarmClock
//
//  Created by Zhenxin on 11/28/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import "TouchInterceptionWindow.h"
#import "ActivityIndicator.h"
#import "Flurry.h"
#import "UIView + Animation.h"
#import "AppConfig.h"
#import "IPodMusicManager.h"
#import "SoundManager.h"
#import "PlistManger.h"
#import "SplashViewController.h"
#import "HomeViewController.h"
#import "UINavigationBar + Extension.h"
#import "UINavigationItem + Extension.h"
#import "WeatherManager.h"
#import "SleepAssistManager.h"
#import "LightManager.h"
#import "AutoLockManager.h"
#import "AlarmManager.h"
#import "NSDate+MTDates.h"
#import "AlarmModel.h"
#import "DBHandler.h"
#import "ShareManager.h"
#import "CustomTabBarController.h"


@interface AppDelegate : UIResponder <UIApplicationDelegate> {

}

@property (strong, nonatomic) FBSession *session;

@property (strong, nonatomic) IBOutlet TouchInterceptionWindow *window;

@property (strong, nonatomic) IBOutlet CustomTabBarController *tabbarController;

@property (strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) UINavigationController *alarmNavController;


@property (strong, nonatomic) SplashViewController *splashViewController;

@property (strong, nonatomic) HomeViewController *homeViewController;


@property (strong, nonatomic) WeatherManager *weatherManager;

@property (strong, nonatomic) SleepAssistManager *sleepAssistManager;

@property (strong, nonatomic) LightManager *lightManager;

@property (strong, nonatomic) AlarmManager *alarmManager;

@property (strong, nonatomic) DBHandler *dbHandler;

@property (strong, nonatomic) ShareManager *shareManager;

@property (strong, nonatomic) UILocalNotification *receivedNotification;


@property (assign) BOOL isPhone5, isPad;

@end
