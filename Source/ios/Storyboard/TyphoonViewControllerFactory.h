////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2015, Typhoon Framework Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@class TyphoonStoryboardDefinitionContext;
@class TyphoonComponentFactory;

@interface TyphoonViewControllerFactory : NSObject

- (instancetype)initWithFactory:(TyphoonComponentFactory *)factory;

- (UIViewController *)viewControllerWithStoryboardContext:(TyphoonStoryboardDefinitionContext *)context;
- (UIViewController *)viewControllerWithPrototype:(UIViewController *)prototype;

@end
