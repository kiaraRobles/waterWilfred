//
//  WWAMenuRootViewController.h
//  WaterWilfred
//
//  Created by Kiara Robles on 1/11/16.
//  Copyright © 2016 Kiara Robles. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WWAMenuRootViewController : UIViewController

/** Holds the container view with the imageView and label in it. */
@property (nonatomic, strong, readwrite) UIView *containerView;

/** Holds the centred image view within the view controllers. */
@property (nonatomic, strong, readwrite) UIImageView *imageView;

/** Holds the menu image for the menu button. */
@property (nonatomic, strong, readwrite) UIImage *menuImg;

/** Holds the image to be used by the imageView. */
@property (nonatomic, strong, readwrite) UIImage *image;

/** Holds the menu title label. */
@property (nonatomic, strong, readwrite) UILabel *label;

@end
