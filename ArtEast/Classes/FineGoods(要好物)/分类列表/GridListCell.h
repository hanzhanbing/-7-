//
//  GridListCell.h
//  ArtEast
//
//  Created by yibao on 16/11/29.
//  Copyright © 2016年 北京艺宝网络文化有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AEEmitterButton.h"

#define kGridListCell @"GridListCell"

@class GoodsModel;

@interface GridListCell : UICollectionViewCell

/**
 0：列表视图，1：格子视图
 */
@property (nonatomic, assign) BOOL isGrid;

@property (nonatomic, strong) GoodsModel *model;

@property (nonatomic, strong) UIImageView *imageV;
@property (nonatomic, strong) AEEmitterButton *collectBtn;

@end
