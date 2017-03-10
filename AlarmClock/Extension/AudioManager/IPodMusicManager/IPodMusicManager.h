//
//  IPodMusicManager.h
//  AlarmClock
//
//  Created by Zhenxin on 1/15/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

/* Usage *
 
    NSArray *iPodMusicList = @[@"16163932755549241029", @"12176376805585989036", @"2548381423674703207", @"7460308729666093440", @"12977676534260686573"];

    [IPodMusicManager sharedManager].allowsBackgroundMusic = NO;
    [IPodMusicManager sharedManager].volume = 1.0;
    [IPodMusicManager sharedManager].shuffleMusic = YES;
    [IPodMusicManager sharedManager].iPodPlayList = [NSMutableArray arrayWithArray:iPodMusicList];
    [[IPodMusicManager sharedManager] playMusicWithFadeIn:YES duration:30];
*/

#import <Foundation/Foundation.h>

@interface IPodMusicManager : NSObject {
    
    CGFloat _volume;
    BOOL _fadeIn;
    BOOL _shuffleMusic;
    NSMutableArray *_iPodPlayList;
    BOOL _allowsBackgroundMusic;
    NSInteger _duration;
}

@property (nonatomic, assign) CGFloat volume;
@property (nonatomic, assign) BOOL fadeIn;
@property (nonatomic, assign) BOOL fadeOut;
@property (nonatomic, assign) BOOL shuffleMusic;
@property (nonatomic, strong) NSMutableArray *iPodPlayList;
@property (nonatomic, assign) BOOL allowsBackgroundMusic;
@property (nonatomic, assign) NSInteger duration;

+ (IPodMusicManager *)sharedManager;
- (void)preventSystemVolumePopup:(NSNumber *)hidden;
- (void)playMusicWithFadeIn:(BOOL)fadeIn;
- (void)playMusicWithFadeIn:(BOOL)fadeIn duration:(int)minuteDuration;
- (void)playMusicWithFadeOut:(BOOL)fadeOut duration:(int)minuteDuration;
- (void)stop;
@end
