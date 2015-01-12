//
//  JVFloatingDrawerViewController.h
//  JVFloatingDrawer
//
//  Created by Julian Villella on 2015-01-11.
//  Copyright (c) 2015 JVillella. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, JVFloatingDrawerSide) {
    JVFloatingDrawerSideLeft = 0,
    JVFloatingDrawerSideRight
};

@class JVFloatingDrawerSpringAnimator;

@interface JVFloatingDrawerViewController : UIViewController

#pragma mark - Managed View Controllers

@property (nonatomic, strong) UIViewController *centerViewController;
@property (nonatomic, strong) UIViewController *leftViewController;
@property (nonatomic, strong) UIViewController *rightViewController;

#pragma mark - Reveal Widths

@property (nonatomic, assign) CGFloat leftDrawerRevealWidth;
@property (nonatomic, assign) CGFloat rightDrawerRevealWidth;

#pragma mark - Interaction

@property (nonatomic, assign, getter=isDragToRevealEnabled) BOOL dragToRevealEnabled;

- (void)openDrawerWithSide:(JVFloatingDrawerSide)drawerSide animated:(BOOL)animated
                completion:(void(^)(BOOL finished))completion;

- (void)closeDrawerWithSide:(JVFloatingDrawerSide)drawerSide animated:(BOOL)animated
                 completion:(void(^)(BOOL finished))completion;

- (void)toggleDrawerWithSide:(JVFloatingDrawerSide)drawerSide animated:(BOOL)animated
                  completion:(void(^)(BOOL finished))completion;

#pragma mark - Animation

@property (nonatomic, strong) JVFloatingDrawerSpringAnimator *drawerAnimator;

#pragma mark - Background

@property (nonatomic, strong) UIImage *backgroundImage;

@end
