//
//  LZPageViewController.h
//  LZSegmentPageController
//
//  Created by nacker on 16/3/25.
//  Copyright © 2016年 帶頭二哥 QQ:648959. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LZPageViewController : SYBaseViewController

- (instancetype)initWithTitles:(NSArray *)titlesArray controllersClass:(NSArray *)controllersClass;

@end