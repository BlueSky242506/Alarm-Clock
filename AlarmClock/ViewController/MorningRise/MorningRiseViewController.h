//
//  MorningRiseViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/20/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MorningRiseFooterView.h"

@interface MorningRiseViewController : UIViewController <UITableViewDelegate, MorningRiseFooterViewDelegate> {
    
    IBOutlet UITableView *_tableView;
    
    IBOutlet UIBarButtonItem *_doneBarButton;
}

@end