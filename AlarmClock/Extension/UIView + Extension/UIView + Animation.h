//
//  UIView.h
//  iFun
//
//  Created by System Administrator on 6/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface UIView (Animation)

@property (nonatomic) CGPoint frameOrigin;
@property (nonatomic) CGSize frameSize;

@property (nonatomic) CGFloat frameX;
@property (nonatomic) CGFloat frameY;

// Setting these modifies the origin but not the size.
@property (nonatomic) CGFloat frameRight;
@property (nonatomic) CGFloat frameBottom;

@property (nonatomic) CGFloat frameWidth;
@property (nonatomic) CGFloat frameHeight;

- (void) moveTo:(CGPoint) center duration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) frameTo:(CGRect) frame duration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) setAlpha:(CGFloat) alpha duration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) setScale:(CGFloat) scale duration:(CGFloat) duration completion:(void (^)(void)) completion;
- (void) setScale:(CGFloat) scale duration:(CGFloat) duration transform:(CGAffineTransform) transform completion:(void (^)(void)) completion;
- (void) setScale:(CGFloat) scale duration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) setScale:(CGFloat) scale duration:(CGFloat) duration transform:(CGAffineTransform) transform delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) fadeInWithDuration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) fadeOutWithDuration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) zoomInWithDuration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) zoomOutWithDuration:(CGFloat) duration delegate:(id) delegate didStopSelector:(SEL) selector;
- (void) popupAnimation;
- (void) verticalShakeAnimation;
- (void) horizontalShakeAnimation;

- (void) addSubviews:(NSArray *) objects;
- (void) removeAllAnimations;
- (void) removeAllSubviews;
- (void) removeAllSubviewsExcept:(UIView *) view;
- (void) setHiddenForAllSubviews:(BOOL) hidden;
- (void) setBackgroundColorForAllSubviews:(UIColor *) backgroundColor;

- (UIView *) lastSubview;
- (NSArray *) subviewsInRect:(CGRect) rect;

@end
