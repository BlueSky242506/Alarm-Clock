//
//  SleepSafeViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/4/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SleepSafeViewController : UIViewController {

    IBOutlet UIBarButtonItem *_doneBarButton;
}

@property (nonatomic, strong) UIPopoverController *popOverController;

@end
