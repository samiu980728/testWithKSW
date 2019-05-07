//
//  ViewController.h
//  试炼 UITableView
//
//  Created by 萨缪 on 2018/7/21.
//  Copyright © 2018年 萨缪. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
//首先在Viewcontroller.h文件中实现视图协议
<
UITableViewDelegate,
UITableViewDataSource
>
//然后定义视图对象 既然是视图对象 就是UITableView类型的 需要大括号 这是在.h文件中干的事
{
    UITableView * _tableView;
}

@end

