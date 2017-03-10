//
//  FlashlightViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/21/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FlashlightHeaderView.h"

@interface FlashlightViewController : UIViewController <UITableViewDelegate, FlashlightHeaderViewDelegate> {
    
    IBOutlet UITableView *_tableView;
}

@end