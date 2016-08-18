//
//  QCSheetView.h
//  QCAlertView
//
//  Created by Joe-c on 16/8/17.
//  Copyright © 2016年 Joe. All rights reserved.
//

#import "QCAlertView.h"

@interface QCSheetView : QCAlertView

/**
 *  显示 sheetView (不显示消息标题)
 *
 *  @param buttonsTitle   按钮标题数组
 *  @param alertViewblock 点击回调 (1~...)
 *
 *  @return QCSheetView
 */
+ (instancetype)showSheetViewWithButtonsTitle:(NSArray *)buttonsTitle alertViewblock:(alertViewClickOption)alertViewblock;

/**
 *  显示 sheetView (不显示破坏性按钮)
 *
 *  @param message        标题消息
 *  @param buttonsTitle   按钮标题数组
 *  @param alertViewblock 点击回调 (1~...)
 *
 *  @return QCSheetView
 */
+ (instancetype)showSheetViewWithMessage:(NSString *)message andButtonsTitle:(NSArray *)buttonsTitle alertViewblock:(alertViewClickOption)alertViewblock;

/**
 *  显示 sheetView
 *
 *  @param message                标题消息
 *  @param destructiveButtonTitle 破坏性按钮标题
 *  @param otherButtonTitles      其他按钮标题数组
 *  @param alertViewblock         点击回调 (1~...)
 *
 *  @return QCSheetView
 */
+ (instancetype)showSheetViewWithMessage:(NSString *)message destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles alertViewblock:(alertViewClickOption)alertViewblock;

@end
