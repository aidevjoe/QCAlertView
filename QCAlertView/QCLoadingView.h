//
//  QCLoadingView.h
//  QCAlertView
//
//  Created by Joe on 16/8/17.
//  Copyright © 2016年 Joe. All rights reserved.
//

#import "QCAlertView.h"

@interface QCLoadingView : QCAlertView

+ (instancetype)showLoadingView;

+ (instancetype)showLoadingViewWithContentView:(UIView *)contentView;


+ (void)hideLoadingView;
@end
