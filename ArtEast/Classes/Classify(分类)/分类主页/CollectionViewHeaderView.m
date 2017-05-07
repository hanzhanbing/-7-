//
//  CollectionViewHeaderView.m
//  Linkage
//
//  Created by LeeJay on 16/8/22.
//  Copyright © 2016年 LeeJay. All rights reserved.
//

#import "CollectionViewHeaderView.h"

@implementation CollectionViewHeaderView

- (id)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame])
    {
        self.backgroundColor = [UIColor whiteColor];
        
        self.imageView = [[UIImageView alloc] initWithFrame:CGRectMake(15, 15, WIDTH-110, (WIDTH-110)/3)];
        self.imageView.backgroundColor = PageColor;
        [self addSubview:self.imageView];
        
        UIView *lineView = [[UIView alloc] initWithFrame:CGRectMake((WIDTH-230)/2, self.imageView.maxY+25, 130, 0.5)];
        lineView.backgroundColor = LineColor;
        lineView.alpha = 0.3;
        [self addSubview:lineView];
        
        self.title = [[UILabel alloc] initWithFrame:CGRectMake((WIDTH-180)/2, self.imageView.maxY+15, 100, 20)];
        self.title.backgroundColor = [UIColor whiteColor];
        self.title.font = [UIFont systemFontOfSize:13];
        self.title.textColor = [UIColor grayColor];
        self.title.textAlignment = NSTextAlignmentCenter;
        [self addSubview:self.title];
    }
    return self;
}

@end
