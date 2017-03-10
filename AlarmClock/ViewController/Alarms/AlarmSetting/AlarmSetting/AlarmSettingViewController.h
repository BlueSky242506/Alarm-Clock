//
//  AlarmSettingViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/7/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AlarmModel;

@interface AlarmSettingViewController : UIViewController <UITableViewDelegate> {
    
   IBOutlet UITableView *_tableView;
}

@property (nonatomic, strong) AlarmModel *alarmModel;
@end
