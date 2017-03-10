//
//  MorningRiseFooterView.h
//  AlarmClock
//
//  Created by Zhenxin on 12/20/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MorningRiseFooterViewDelegate;

@interface MorningRiseFooterView : UIView {
    
}

@property (nonatomic) id<MorningRiseFooterViewDelegate> delegate;

@end



@protocol MorningRiseFooterViewDelegate <NSObject>

@optional

- (void)didFinishTappedVideoPlayButton:(MorningRiseFooterView *)footerView;

@end