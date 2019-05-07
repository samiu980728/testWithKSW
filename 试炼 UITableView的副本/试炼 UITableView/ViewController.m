//
//  ViewController.m
//  试炼 UITableView
//
//  Created by 萨缪 on 2018/7/21.
//  Copyright © 2018年 萨缪. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    //在viewDidLoad中写入的内容有那些呢？
    //首先 你不是定义了一个_tableView了吗 然后就该给这个_tableView赋值了
    //该变量的尺寸 是当前屏幕尺寸 风格 Plain是普通风格 另一个group是分组风格
    _tableView = [[UITableView alloc]initWithFrame:self.view.bounds style:UITableViewStylePlain];
    
    //在view里的第二个步骤就是设置代理  两个代理参数就是刚才.h文件中定义的那两个参数 都接收self的值
    _tableView.delegate = self;
    _tableView.dataSource = self;
    
    //然后把_tableView加入到当前视图
    [self.view addSubview:_tableView];
}

//然后开始实现_tableView中自带的那些函数
//第一个 获取元素每组中的元素个数row 返回值当然是 NSIntger啦
//返回一个值
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 5;
}

//获取组数sections
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 3;
}

//最后一个就是创建单元格对象函数
//返回值当然是单元格对象 UITableViewCell * 注意 * 啊啊啊啊
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    //先设置单元格名称
    NSString * cellStr = @"cell";
    
    //寻找可复用的值
    UITableViewCell * cell = [_tableView dequeueReusableCellWithIdentifier:cellStr];
    //如果没找到
    if ( cell == nil ){
        //创建一个单元格duix
        //p2:单元格复用标记
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellStr];
    }
    //然后给单元格的每一个单位进行赋值
    //需要创建一个字符
    NSString * str = [NSString stringWithFormat:@"第%ld组,第%ld行",indexPath.section,indexPath.row];
    //将这个字符给单元格的朱文字内容赋值
    cell.textLabel.text = str;
    //返回cell
    return cell;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
