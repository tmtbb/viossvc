//
//  BQImageView.h
//  BQCommunity
//
//  Created by TJQ on 14-8-5.
//  Copyright (c) 2014年 beiqing. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZLCameraImageView;

@protocol ZLCameraImageViewDelegate <NSObject>

@optional
/**
 *  根据index来删除照片
 *
 */
- (void ) deleteImageView : (ZLCameraImageView *) imageView;

@end

@interface ZLCameraImageView : UIImageView

@property (strong, nonatomic) UIImage *originalImageView;

@property (weak, nonatomic) id <ZLCameraImageViewDelegate> delegatge;

@property (assign, nonatomic) NSInteger index;
/**
 *  是否是编辑模式 , YES 代表是
 */
@property (assign, nonatomic, getter = isEdit) BOOL edit;


@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com