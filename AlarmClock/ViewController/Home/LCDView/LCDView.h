//
//  LCDView.h
//  AlarmClock
//
//  Created by Zhenxin on 12/25/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface LCDView : UIView {
    
@private
    
    UIImageView *_weatherIcon;
    
    UILabel *_conditionLabel;
    
    
    UILabel *_shadowTimeLabel[8];
    
    UILabel *_shadowMeridiemLabel[2];
    
    UILabel *_expTimeLabel[8];
    
    UILabel *_expMeridiemLabel[2];
    

    NSTimer *_timer;
}


+ (CGRect)suitableFrame:(UIInterfaceOrientation)orientation;

- (void)refreshLcdView:(UIInterfaceOrientation)orientation;

- (void)setColor:(UIColor *)color;

@end
