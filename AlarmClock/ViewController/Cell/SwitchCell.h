//
//  SwitchCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/13/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SwitchCellDelegate;

@interface SwitchCell : UITableViewCell

@property (nonatomic, assign) id<SwitchCellDelegate> delegate;

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) IBOutlet UILabel *subTitleLabel;

@property (nonatomic, strong) IBOutlet UISwitch *enableSwitch;

+ (SwitchCell *)switchCell:(UITableView *)tableview;

- (void)setDisable:(BOOL)disable;

@end


@protocol SwitchCellDelegate <NSObject>

@optional

- (void)switchCell:(SwitchCell *)cell didFinsihValueChanged:(UISwitch *)switchView;

@end

