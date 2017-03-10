//
//  TimeFormatCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/21/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TimeFormatCellDelegate;

@interface TimeFormatCell : UITableViewCell

@property (nonatomic, assign) id<TimeFormatCellDelegate> delegate;

@property (nonatomic, strong) IBOutlet UISegmentedControl *segmentControl;

+ (TimeFormatCell *)timeFormatCell:(UITableView *)tableview;

@end


@protocol TimeFormatCellDelegate <NSObject>

@optional

- (void)timeFormatCell:(TimeFormatCell *)cell didFinsihValueChanged:(UISegmentedControl *)segmentControl;

@end