//
//  SliderCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/15/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SliderCellDelegate;

@interface SliderCell : UITableViewCell

@property (nonatomic, assign) id<SliderCellDelegate> delegate;

@property (nonatomic, strong) IBOutlet UISlider *slider;

+ (SliderCell *)sliderCell:(UITableView *)tableview;

@end


@protocol SliderCellDelegate <NSObject>

@optional

- (void)sliderCell:(SliderCell *)cell didFinsihValueChanged:(UISlider *)slider;

@end