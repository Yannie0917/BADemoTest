//
//  BAHeader.h
//  demoTest
//
//  Created by 博爱 on 16/3/15.
//  Copyright © 2016年 博爱之家. All rights reserved.
//

#ifndef BAHeader_h
#define BAHeader_h


// 头文件
#import <UIKit/UIKit.h> // UI
#import <Foundation/Foundation.h> // NS

#import "UIView+Extension.h"


#import <Masonry.h>
#import "UIView+SDAutoLayout.h"
#import "UITableView+SDAutoTableViewCellHeight.h"
#import "UIImageView+WebCache.h"

//#define  contentLabelFontSize  15
//#define  maxContentLabelHeight  54


#pragma mark - ***** frame设置
// 当前设备的屏幕宽度
#define KSCREEN_WIDTH    [[UIScreen mainScreen] bounds].size.width
// 当前设备的屏幕高度
#define KSCREEN_HEIGHT   [[UIScreen mainScreen] bounds].size.height
// 导航栏高，前提控制器带导航栏
#define NAV_HEIGHT CGRectGetHeight(self.navigationController.navigationBar.frame)
// 状态栏高度
#define STATUSBAR_HEIGHT CGRectGetHeight([UIApplication sharedApplication].statusBarFrame)
// Tabbar 的高度
#define getTabbarHeight 49
// 黄金比例的宽
#define WIDTH_0_618 WIDTH * 0.618

// BABannerView.h 广告frame
#define YRBannerHeight 100
// 直播、点播页面 头高
#define YRLiveHeadViewHeight 250

// 字体
#define KFontSize(fontSize) [UIFont systemFontOfSize:fontSize]



#pragma mark - ***** 颜色设置
// 颜色
#define KCOLOR(R, G, B, A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]
// 随机色
#define YRRandomColor      [UIColor colorWithRed:arc4random_uniform(256)%255.0 green:arc4random_uniform(256)%255.0 blue:arc4random_uniform(256)%255.0 alpha:1.0]
// navi蓝色
#define NaviBgBlueColor    KCOLOR(92, 177, 251, 1.0)
#define kWHITECOLOR        [UIColor whiteColor]
#define kBGGrayColor       KCOLOR(239, 239, 239, 1.0)
#define kTEXTGrayColor     KCOLOR(148, 147, 133, 1.0)
#define kBLUEColor         KCOLOR(78, 164, 255, 1.0)


// 警告框-一个按钮
#define SHOW_ALERT(title, msg)  UIAlertController *alert = [UIAlertController alertControllerWithTitle:title  message:msg preferredStyle:UIAlertControllerStyleAlert];\
[alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {\
NSLog(@"你点击了确定按钮！");\
}]];\
[self presentViewController:alert animated:YES completion:nil];\


#endif /* BAHeader_h */
