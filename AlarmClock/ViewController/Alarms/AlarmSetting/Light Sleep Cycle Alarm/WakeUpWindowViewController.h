//
//  WakeUpWindowViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/12/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppConfig.h"

@protocol WakeUpWindowViewControllerDelegate;

@interface WakeUpWindowViewController : UIViewController <UITableViewDelegate> {
    
    IBOutlet UITableView *_tableView;
}

@property (nonatomic, assign) id<WakeUpWindowViewControllerDelegate> delegate;

@property (nonatomic, assign) WakeUpWindow wakeupwindow;

@end


@protocol WakeUpWindowViewControllerDelegate <NSObject>

@optional

- (void)wakeUpWindowViewController:(WakeUpWindowViewController *)viewController didFinishChangedWindowTime:(WakeUpWindow)wakeupwindow;

@end