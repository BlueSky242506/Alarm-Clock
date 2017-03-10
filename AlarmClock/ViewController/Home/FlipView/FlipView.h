//
//  FlipView.h
//  AlarmClock
//
//  Created by Zhenxin on 1/5/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FXLabel.h"

@interface FlipView : UIView {
    
@private

    UIImageView *_backgroundImageView;
    UIImageView *_crosslineImageView;

    FXLabel *_hourLabel;
    FXLabel *_minuteLabel;
    
    UIImageView *_weatherIcon;
    FXLabel *_weatherLabel;

    FXLabel *_meridiemLabel;
    FXLabel *_dateLabel;

    NSTimer *_timer;
}


+ (CGRect)suitableFrame:(UIInterfaceOrientation)orientation;
- (void)refreshFlipView:(UIInterfaceOrientation)orientation;

@end
