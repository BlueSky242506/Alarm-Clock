//
//  SegmentCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/20/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SegmentCellDelegate;

@interface SegmentCell : UITableViewCell

@property (nonatomic, assign) id<SegmentCellDelegate> delegate;

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) IBOutlet UISegmentedControl *segmentControl;

+ (SegmentCell *)segmentCell:(UITableView *)tableview;

@end


@protocol SegmentCellDelegate <NSObject>

@optional

- (void)segmentCell:(SegmentCell *)cell didFinsihValueChanged:(UISegmentedControl *)segmentControl;

@end
