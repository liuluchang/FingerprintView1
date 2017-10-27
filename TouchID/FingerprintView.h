//
//  FingerprintView.h
//  zhbg
//
//  Created by liulc on 16/11/23.
//  Copyright © 2016年 王光虎. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FingerprintView : UIView

@property (nonatomic,copy) void(^FingerprintBlock)(); //点击指纹登录按钮
@property (nonatomic,copy) void(^AccountLoginBlock)(); //起他登录方式

+ (instancetype)viewWithAccount:(NSString *)account fingerprintBlock:(void (^)())fingerprintBlock accountLoginBlock:(void (^)())accountLoginBlock;

@end
