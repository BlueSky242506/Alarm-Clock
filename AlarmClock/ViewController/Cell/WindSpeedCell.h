//
//  WindSpeedCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/21/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WindSpeedCellDelegate;

@interface WindSpeedCell : UITableViewCell
@property (nonatomic, assign) id<WindSpeedCellDelegate> delegate;
@property (nonatomic, strong) IBOutlet UISegmentedControl *segmentControl;

+ (WindSpeedCell *)windSpeedCell:(UITableView *)tableview;
@end

@protocol WindSpeedCellDelegate <NSObject>
@optional
- (void)windSpeedCell:(WindSpeedCell *)cell didFinsihValueChanged:(UISegmentedControl *)segmentControl;
@end



