//
//  Utility.h
//  OATest
//
//  Created by zhangqiang on 15/9/2.
//  Copyright (c) 2015年 zhangqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Utility : NSObject

/**
 *  初始化是否显示引导图信息
 *
 *  @param dict
 */
+ (void)initStateForLeaddingView;

/**
 *  是否显示过
 *
 *  @return
 */
+ (BOOL )shouldShowLeadViewStateWithKey:(NSString *)leadView;

/**
 *  更新状态
 *
 *  @return
 */
+(void)updateStateForLeadView:(NSString *)leadView;
/**
 *  获取用户信息
 *
 *  @return 用户信息
 */
+(NSDictionary *)getUserInfoFromLocal;

/**
 *  存储用户信息
 *
 *  @param dict 用户信息
 */
+(void)saveUserInfo:(NSDictionary *)dict;

/**
 *  设置登录状态
 *
 *  @param isLogin 是否登录
 */
+(void)setLoginStates:(BOOL )isLogin;

/**
 *  登录状态
 *
 *  @return 是否登录
 */
+(BOOL )isLogin;

/**
 *  获取用户ID
 */
+ (NSString *)getUserID;

/**
 *  获取用户名
 *
 */
+ (NSString *)getUserName;

/**
 *  版本检测
 *
 *  @param versionCheckBlock 是否有新版本
 */
+(void)checkNewVersion:(void(^)(BOOL hasNewVersion))versionCheckBlock;

@end
