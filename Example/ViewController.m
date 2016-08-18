//
//  ViewController.m
//  QCAlertView
//
//  Created by Joe on 16/8/17.
//  Copyright © 2016年 Joe. All rights reserved.
//

#import "ViewController.h"
#import "QCMessageAlertView.h"
#import "QCButtonsAlertView.h"
#import "QCLoadingView.h"
#import "QCSheetView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)showMessageAlertView {
    //QCMessageAlertView
    [QCMessageAlertView showAlertWithMessage:@"Hello world !"];
}

- (IBAction)showButtonsAlertView {
    //QCButtonsAlertView
    [QCButtonsAlertView showAlertWithContentView:self.view andMessage:@"Sure to exit?" andButtonsTitle:@[@"Yes", @"No"] alertViewblock:^(NSInteger tag) {
        NSLog(@"%li", tag);
    }];
}

- (IBAction)showLoadingView {
    //QCButtonsAlertView
    [QCLoadingView showLoadingView];
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.f * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [QCLoadingView hideLoadingView];
    });
}

- (IBAction)showSheetView{
    //QCSheetView
    [QCSheetView showSheetViewWithMessage:@"确定退出登录吗?." andButtonsTitle:@[@"换个账号", @"退出"] alertViewblock:^(NSInteger tag) {
        NSLog(@"%li", tag);
    }];
}
@end
