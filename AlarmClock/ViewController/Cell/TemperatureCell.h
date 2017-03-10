//
//  TemperatureCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/21/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TemperatureCellDelegate;

@interface TemperatureCell : UITableViewCell

@property (nonatomic, assign) id<TemperatureCellDelegate> delegate;

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) IBOutlet UISegmentedControl *segmentControl;

+ (TemperatureCell *)temperatureCell:(UITableView *)tableview;

@end


@protocol TemperatureCellDelegate <NSObject>

@optional

- (void)temperatureCell:(TemperatureCell *)cell didFinsihValueChanged:(UISegmentedControl *)segmentControl;

@end