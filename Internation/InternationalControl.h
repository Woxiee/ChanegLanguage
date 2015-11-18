//
//  InternationalControl.h
//  Internation
//
//  Created by Faker on 15/10/16.
//  Copyright (c) 2015年 Faker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface InternationalControl : NSObject

+(NSBundle *)bundle;//获取当前资源文件

+(void)initUserLanguage;//初始化语言文件

+(NSString *)userLanguage;//获取应用当前语言

+(void)setUserlanguage:(NSString *)language;//设置当前语言

@end
