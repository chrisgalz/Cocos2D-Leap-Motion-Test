//
//  AppDelegate.h
//  Cocos2D Leap Motion Test
//
//  Created by Chris Galzerano on 4/16/13.
//  Copyright Chris Galzerano 2013. All rights reserved.
//

#import "cocos2d.h"

@interface Cocos2D_Leap_Motion_TestAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	CCGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet CCGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
