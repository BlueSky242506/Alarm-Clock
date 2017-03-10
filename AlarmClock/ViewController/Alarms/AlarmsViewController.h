//
//  AlarmsViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/7/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AlarmsViewController : UIViewController <UITableViewDelegate> {
    
@private
    
    IBOutlet UITableView *_tableView;
    
    IBOutlet UIBarButtonItem *_doneBarButton;
    
    IBOutlet UIButton *_addNewAlarmButton;
    
    IBOutlet UIImageView *_upgradeImageView;
    
@public
    
}

@property (nonatomic, strong) UIPopoverController *popOverController;

@end
