//
//  MoreViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/31/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MoreViewController : UIViewController <UITableViewDelegate> {
    
    IBOutlet UITableView *_tableView;
    
    IBOutlet UIBarButtonItem *_doneBarButton;
    
    NSURL *_iTunesURL;
    
    NSMutableArray *_data;
}

@property (nonatomic, strong) UIPopoverController *popOverController;

@end