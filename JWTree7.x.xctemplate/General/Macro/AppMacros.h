//
//  AppMacros.h
//
//  Created by njdby on 16/2/29.
//  Copyright © 2016年 njdby. All rights reserved.
//

#ifndef AppMacros_h
#define AppMacros_h


//导航栏文字的字体和颜色
#define NavTitleFont 18
#define NavTitleColor [UIColor blackColor]

#define BOUNDWidth [UIScreen mainScreen].bounds.size.width
#define BOUNDHeight [UIScreen mainScreen].bounds.size.height
#define BOUNDx [UIScreen mainScreen].bounds.origin.x
#define BOUNDy [UIScreen mainScreen].bounds.origin.y

#define crm(x,y,w,h) (CGRectMake(x, y, w, h))
#define cpm(x,y) CGPointMake(x,y)
#define csm(w,h) CGSizeMake(w,h)
#define ueim(t,l,b,r) UIEdgeInsetsMake(t,l,b,r)

#define BUTTON_CLICKED(button,sel) [button addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside]
#define DEFAULT_NEW_OBJECT(obj) [[obj alloc] init]

#define SHOW_NAVIGATIONBAR(yesOrNo) self.navigationController.navigationBarHidden = !yesOrNo

#define FM_STRING(str) [NSString stringWithFormat:@"%@",string]
#define FM_INT(int) [NSString stringWithFormat:@"%d",int]
#define FM_FLOAT(float) [NSString stringWithFormat:@"%.2f",float]

//由角度获取弧度 有弧度获取角度
#define DegreesToRadians(x) (M_PI * (x) / 180.0)
#define RadiansToDegrees(x) ((x) * 180.0 / M_PI)

#define COLOR(r,g,b,a) ([UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a])
//rgb颜色转换（16进制->10进制）
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define NSLog(format, ...) do {                                                                          \
fprintf(stderr, "<%s : %d> %s\n",                                           \
[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],  \
__LINE__, __func__);                                                        \
(NSLog)((format), ##__VA_ARGS__);                                           \
fprintf(stderr, "-------\n");                                               \
} while (0)

//获取系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define CurrentSystemVersion [[UIDevice currentDevice] systemVersion]

//获取当前语言
#define CurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

//读取本地图片
#define LOADIMAGE(file,type) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle]pathForResource:file ofType:type]]

//NSUserDefaults 实例化
#define USER_DEFAULT [NSUserDefaults standardUserDefaults]

#define DEFAULT_NEW_OBJECT(obj) [[obj alloc] init]
#if !__has_feature(objc_arc)
#define DEFAULT_NEW_OBJECT_AUTORELEASE(obj) [[[obj alloc] init] autorelease]
#endif


#define kPrepareForSegue(name) [self performSegueWithIdentifier:name sender:nil]

#endif /* AppMacros_h */
