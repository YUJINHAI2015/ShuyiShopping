//
//  SYBankTableViewCell.h
//  ShuYiWenHua
//
//  Created by yiLian on 16/9/29.
//  Copyright © 2016年 shuyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SYBankTableViewCell : UITableViewCell
@property (nonatomic, copy) void(^bankAC)(NSString *);
@end