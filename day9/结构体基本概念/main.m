//
//  main.m
//  结构体基本概念
//
//  Created by 木溪鱼 on 2020/9/27.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        /*
         基本数据类型：int、double、float、char
         构造类型（由基本数据类型构成的类型，称之构造类型）：数组（存储一组相同类型的数据）、结构体（存储一组不同类型的数据）
         */
        
        /*
         要保存人的数据，就必须先定义变量
         数据类型 变量名称
         */
        
        /*
         人：
         姓名：
         年龄：
         身高：
         */
        
        /*
         如何定义一个结构体变量
         1. 定义结构体类型
         2. 根据结构体类型，定义结构体变量
         
         struct 结构体名称{
             属性;
         };
         */
        // 1. 定义结构体类型
        struct Person{
//            char name[20];
            char *name;
            int age;
            double height;
        };
        // 2. 定义结构体变量
//        int num;
        struct Person p;
//        注意：数组不能先定义，在进行一次性的初始化，所以下面的写法是错误的。
//        p.name = "mnu";  // p.name = {'m', 'n', 'u', '\0'};
//        可以使用 结构体变量名称 点语法 属性 的方式给结构体变量赋值
        p.name = "mnu";
        p.age = 18;
        p.height = 1.82;
        
//        int nums[3];
//        int nums[0] = 999;
//        int nums[1] = 888;
//        int nums[2] = 777;
        // 注意：数组不能先定义，在进行一次性的初始化，所以下面的写法是错误的。
//        int nums[3];
//        nums = {1, 3, 5};
        
        NSLog(@"Hello, World!");
    }
    return 0;
}
