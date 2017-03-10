//
//  SoundViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/13/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SoundViewControllerDelegate;

@interface SoundViewController : UIViewController {
    
}

@property (nonatomic, assign) id<SoundViewControllerDelegate> delegate;

@property (nonatomic, assign) BOOL showVolumeSection; // lightSleepCycleAlarm will doesn't have this section so we added this without making other UI again.

@property (nonatomic, assign) CGFloat volumeValue;
@property (nonatomic, assign) int soundIndex;
@property (nonatomic, strong) NSMutableArray *soundsList;
@property (nonatomic, assign) BOOL isPlayiPodMusic;
@property (nonatomic, strong) NSMutableArray *iPodPlayList;
@property (nonatomic, assign) BOOL isShuffleMusic;

@end

@protocol SoundViewControllerDelegate <NSObject>
@optional
- (void)didFinishSettedSound:(SoundViewController *)viewController;
@end
