//
//  AlarmCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/8/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AlarmCellDelegate;
@interface AlarmCell : UITableViewCell
@property (nonatomic, assign) id<AlarmCellDelegate> delegate;
@property (nonatomic, strong) IBOutlet UILabel *timeLabel;
@property (nonatomic, strong) IBOutlet UILabel *meridiemLabel;
@property (nonatomic, strong) IBOutlet UILabel *descriptionLabel;
@property (nonatomic, strong) IBOutlet UISwitch *enableSwitch;
@property (nonatomic, strong) IBOutlet UILabel *detailLabel;
@end


@protocol AlarmCellDelegate <NSObject>
@optional
- (void)alarmCell:(AlarmCell *)cell didFinsihValueChanged:(UISwitch *)switchView;
@end


