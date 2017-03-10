//
//  ClockDisplayHeaderView.h
//  AlarmClock
//
//  Created by Zhenxin on 12/21/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ClockDisplayHeaderViewDelegate;

@interface ClockDisplayHeaderView : UIView {
    
    id<ClockDisplayHeaderViewDelegate> _delegate;
    
    IBOutlet UIImageView *imageView;
}

@property (nonatomic) id<ClockDisplayHeaderViewDelegate> delegate;

@property (nonatomic, strong) IBOutlet UISegmentedControl *segmentControl;

@end


@protocol ClockDisplayHeaderViewDelegate <NSObject>

@optional

- (void)clockDisplayHeaderView:(ClockDisplayHeaderView *)view didChangedValue:(UISegmentedControl *)segmentControl;

@end
