//
//  UIProgressView+ColorAndFont.h
//  UIKitter
//
//  Created by Cyfuer on 2019/7/16.
//  Copyright © 2019 Cyfuer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIProgressView (ColorAndFont)

@property (nonatomic, copy) IBInspectable NSString *kt_progressTintColor;
@property (nonatomic, copy) IBInspectable NSString *kt_trackTintColor;
@end

NS_ASSUME_NONNULL_END
