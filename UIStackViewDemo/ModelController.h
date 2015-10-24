//
//  ModelController.h
//  UIStackViewDemo
//
//  Created by Xuzixiang on 15/10/25.
//  Copyright © 2015年 touchSpring. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

