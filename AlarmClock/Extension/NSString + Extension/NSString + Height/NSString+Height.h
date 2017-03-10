//
//  NSString+Height.h
//  FlashCard
//
//  Created by System Administrator on 4/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(Height)
- (CGFloat)getHeightWithFont:(UIFont *)font  constraintWidth:(float)constraintWidth;
@end
