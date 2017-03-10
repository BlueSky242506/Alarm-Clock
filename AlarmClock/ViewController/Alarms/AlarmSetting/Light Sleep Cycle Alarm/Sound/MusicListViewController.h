//
//  MusicListViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/14/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@protocol MusicListViewControllerDelegate;

@interface MusicListViewController : UIViewController <UITableViewDelegate, MPMediaPickerControllerDelegate> {
    
    IBOutlet UITableView *_tableView;
}

@property (nonatomic, assign) id<MusicListViewControllerDelegate> delegate;

@property (nonatomic, strong) NSMutableArray *iPodMusicPersistentIDs;

@end


@protocol MusicListViewControllerDelegate <NSObject>

@optional

- (void)iPodMusicListViewController:(MusicListViewController *)viewController didFinishChangedLists:(NSMutableArray *)iPodMusicPersistentIDs isChanged:(BOOL)isChanged;

@end
