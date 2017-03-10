//
//  ClockDisplayViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/20/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ClockDisplayHeaderView.h"
#import "SwitchCell.h"
#import "TimeFormatCell.h"
#import "SliderCell.h"


@interface ClockDisplayViewController : UIViewController <UITableViewDelegate, ClockDisplayHeaderViewDelegate, SwitchCellDelegate, TimeFormatCellDelegate, SliderCellDelegate> {
    
    IBOutlet UITableView *_tableView;
    
    ClockDisplayHeaderView *headerView;
}

@end
