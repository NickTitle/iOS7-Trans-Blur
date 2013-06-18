//
//  stackBlurViewController.h
//  stackBlur
//
//  Created by Thomas on 07/02/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NickTitleStackBlurVC : UIViewController {
	IBOutlet	UIImageView *imagePreview;
	UIImage *source;
}

@property (nonatomic, retain) UIView *maskHolder;
@property (nonatomic, retain) UIImageView *maskView;
@property (nonatomic, retain) UIImageView *normalView;
@property (nonatomic, retain) UIImageView *blurView;
@property (nonatomic, retain) UIImageView *overlayView;

@property (nonatomic, retain) UIImage *blurImage;

- (IBAction) sliderChanged:(id)sender;



@end

