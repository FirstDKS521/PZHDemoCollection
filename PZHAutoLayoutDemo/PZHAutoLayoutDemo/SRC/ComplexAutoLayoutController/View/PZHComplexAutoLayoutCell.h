//
//  PZHComplexAutoLayoutCell.h
//  PZHAutoLayoutDemo
//
//  Created by nuomi on 16/7/5.
//  Copyright © 2016年 nuomi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PZHBaseTableViewCell.h"
@interface PZHComplexAutoLayoutCell : PZHBaseTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *remarkLabel;
@end
@interface UITableView(PZHComplexAutoLayoutCell)
- (PZHComplexAutoLayoutCell*)PZHComplexAutoLayoutCell;
@end