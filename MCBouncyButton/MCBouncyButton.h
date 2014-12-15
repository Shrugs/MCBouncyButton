//
//  MCBouncyButton.h
//
//  Created by Matt Condon on 12/13/14.
//  Copyright (c) 2014 Shrugs. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    MCBouncyButtonStyleDefault,
    MCBouncyButtonStyleSelected
} MCBouncyButtonStyle;

@interface MCBouncyButton : UIButton

@property (nonatomic, strong) UIImage *icon;
@property (nonatomic, strong) UIImage *iconNegative;

// BUTTON PROPERTIES
@property (nonatomic, strong) UIColor *defaultBodyColor; // default button body color (default a system grey)
@property (nonatomic, strong) UIColor *defaultShadowColor; // default button shadow color (default a system grey)
@property (nonatomic, strong) UIColor *selectedBodyColor; // selected button body color (default a happy blue)
@property (nonatomic, strong) UIColor *selectedShadowColor; // selected button shadow color (default a happy blue)
@property (nonatomic, assign) float relativeIconInset; // distance to inset provided icon based on diameter [0..1] (default 0.2f);

// ANIMATION PROPERTIES
@property (nonatomic, assign) float scaleValue; // maximum value to scale button when pressed (default 0.9f)
@property (nonatomic, assign) float buttonBounciness; // POP bounciness value (default 20.0f)
@property (nonatomic, assign) float buttonSpeed; // POP speed value (default 15.0f)


- (id)initWithImage:(UIImage *)image andDiameter:(float)diameter;
- (void)setStyle:(MCBouncyButtonStyle)style animated:(BOOL)animated;


@end