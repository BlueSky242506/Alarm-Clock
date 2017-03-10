//
//  UIViewController +KeyBoardHandle.h
//  Reminder
//
//  Created by System Administrator on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIViewController(KeyBoardHandle)
- (void)setTextFieldControls:(NSMutableArray *)objs;
- (void)setTextViewControls:(NSMutableArray *)objs;
- (void)resignAllTextField;
@end
