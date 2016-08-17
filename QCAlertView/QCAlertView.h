//
//  QCAlertView.h
//  QCAlertView
//
//  Created by Joe on 16/8/17.
//  Copyright © 2016年 Joe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class QCAlertView;

@protocol QCAlertViewDelegate <NSObject>

@optional

/**
 *  AlertView's 点击事件
 *
 *  @param alertView alertView
 *  @param index     点击按钮角标.
 *  @param data      事件数据
 */
- (void)alertView:(QCAlertView *)alertView clickAtIndex:(NSInteger)index data:(id)data;

@end



/**
 *  block 回调事件
 */
typedef void(^alertViewClickOption)(QCAlertView *view, NSInteger tag);


@interface QCAlertView : UIView

/**
 *  AlertView 代理
 */
@property (nonatomic, weak) id <QCAlertViewDelegate> delegate;

/**
 *  block 回调
 */
@property (nonatomic, copy) alertViewClickOption alertViewblock;

/**
 *  消息. 默认是空
 */
@property (nonatomic, strong) NSString  *message;

/**
 *  按钮标题数组, 默认是空
 */
@property (nonatomic, strong) NSArray<NSString *>  *buttonsTitle;

/**
 *  容器视图
 */
@property (nonatomic, weak) UIView *contentView;

/**
 *  自动隐藏, 默认为 YES
 */
@property (nonatomic) BOOL autoHiden;

/**
 *  如果autoHiden 为 YES，该视图延迟隐藏时间，默认是1.5。
 */
@property (nonatomic) NSTimeInterval delayAutoHidenDuration;

/**
 *  显示
 */
- (void)show;

/**
 *  隐藏
 */
- (void)hide;

/**
 *  用 key 存储视图。
 *
 *  @param view 视图.
 *  @param key  Key.
 */
- (void)setView:(UIView *)view withKey:(NSString *)key;

/**
 *  用 key 获取视图。
 *
 *  @param key Key.
 *
 *  @return 视图.
 */
- (UIView *)viewWithKey:(NSString *)key;

@end
