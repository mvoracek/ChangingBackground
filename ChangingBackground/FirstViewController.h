//
//  FirstViewController.h
//  ChangingBackground
//
//  Created by Jeffrey Camealy on 4/15/13.
//  Copyright (c) 2013 Ora Interactive. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController <UINavigationControllerDelegate>

@property NSString *backgroundName;
@property UIImageView *backgroundImageBlue;
@property UIImageView *backgroundImageGreen;

- (IBAction)goForwardButtonPressed;

@end
