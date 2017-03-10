//
//  SleepTrackerViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/15/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SleepTrackerViewController : UIViewController  <UITableViewDelegate> {

    IBOutlet UITableView *_tableView;
    
    IBOutlet UIBarButtonItem *_doneBarButton;
}

@property (nonatomic, strong) UIPopoverController *popOverController;

@end
