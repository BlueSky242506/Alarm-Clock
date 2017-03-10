//
//  RepeatViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/12/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RepeatViewControllerDelegate;

@interface RepeatViewController : UIViewController <UITableViewDelegate> {
    
    IBOutlet UITableView *_tableView;
}

@property (nonatomic, strong) UIPopoverController *popOverController;
@property (nonatomic, assign) id<RepeatViewControllerDelegate> delegate;
@property (nonatomic, strong) NSMutableArray *repeatArray;

@end

@protocol RepeatViewControllerDelegate <NSObject>
@optional
- (void)didFinishPickedRepeats:(RepeatViewController *)viewController;
@end