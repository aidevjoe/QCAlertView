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

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)showMessageAlertView {
    [QCMessageAlertView showAlertWithMessage:@"Hello world !"];
}

- (IBAction)showButtonsAlertView {
    [QCButtonsAlertView showAlertWithContentView:self.view andMessage:@"Sure to exit?" andButtonsTitle:@[@"Yes", @"No"] alertViewblock:^(QCAlertView *view, NSInteger tag) {
        NSLog(@"%li", tag);
    }];
}

- (IBAction)showLoadingView {
    [QCLoadingView showLoadingView];
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.f * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [QCLoadingView hideLoadingView];
    });
}

@end
