//
//  ChooseTimeViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/10/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ChooseTimeViewControllerDelegate;

@interface ChooseTimeViewController : UIViewController {
    
    IBOutlet UIDatePicker *timerPicker;
}

@property (nonatomic, assign) id<ChooseTimeViewControllerDelegate> delegate;

@property (nonatomic, strong) NSString *viewTitle;

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) IBOutlet UILabel *descriptionLabel;

@property (nonatomic, strong) NSDate *time;

@end

@protocol ChooseTimeViewControllerDelegate <NSObject>

@optional

- (void)chooseTimeViewController:(ChooseTimeViewController *)viewController didFinishChangedTime:(NSDate *)time;

@end