//
//  HomeViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 11/29/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "ASViewController.h"
#import "LCDView.h"
#import "FlipView.h"
#import <MediaPlayer/MediaPlayer.h>

@interface HomeViewController :  ASViewController <UIPopoverControllerDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
    
@private
    
    IBOutlet UIButton *_sleepSafeButton;
    
    IBOutlet UIButton *_pillowButton;
    
    IBOutlet UIButton *_alarmSettingButton;
    
    IBOutlet UILabel *_firedTimeLabel;
    
    IBOutlet UIButton *_sunSetButton;
    
    IBOutlet UIButton *_moreAppButton;
    
    IBOutlet UIView *_clockView;
    
    IBOutlet UIView *_brightnessView;
    
    IBOutlet UIView *_flashlightView;
    
    IBOutlet UIView *_videoView;
    
    IBOutlet UIButton *_snoozeButton;
    
    IBOutlet UIButton *_stopButton;
    
    
   	MPMoviePlayerController *_moviePlayer;
    
    LCDView *_lcdView; 
    
    FlipView *_flipView;
}

@property (nonatomic, strong) UIPopoverController *popOverController;

- (void)playSunriseVideo:(float)duration;

- (void)stopSunriseVideo;

- (void)whiteFlashlight:(BOOL)on;

- (void)changeBrightness:(CGFloat)newBright;

- (void)showSnoozeButton:(BOOL)isShow;

- (void)showStopButton:(BOOL)isShow;

- (void)updateFiredTime;

@end
