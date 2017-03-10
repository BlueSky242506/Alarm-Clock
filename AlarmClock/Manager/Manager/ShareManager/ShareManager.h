//
//  ShareManager.h
//  PuppyBooth
//
//  Created by System Administrator on 7/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ShareManagerDelegate;

@interface ShareManager : NSObject {
    
@public
    
    UIImage *_image;
    NSString *_description;
    
@private
    
    UIViewController *_parentViewController;
}

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *description;
@property (nonatomic, assign) id<ShareManagerDelegate> delegate;

- (void)setParentViewController:(UIViewController *)controller;
- (void)shareToFb;
- (void)shareToTwitter;
@end

@protocol ShareManagerDelegate <NSObject>

@optional

- (void)shareManager:(ShareManager *)mng didFinsihedUploadData:(BOOL)success;

@end
