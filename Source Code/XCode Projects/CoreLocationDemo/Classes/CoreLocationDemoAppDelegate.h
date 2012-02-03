//
//  CoreLocationDemoAppDelegate.h
//  CoreLocationDemo
//
//  Created by McKenzie Kurtz on 11/1/11.
//  Copyright 2011 Oregon Institute of Technology. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CoreLocationDemoViewController;
@class LocationTable;

@interface CoreLocationDemoAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CoreLocationDemoViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CoreLocationDemoViewController *viewController;

@end

