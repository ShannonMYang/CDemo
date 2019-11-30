//
//  main.c
//  day5
//
//  Created by Shannon MYang on 2019/11/27.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>
/*
 * 1. C语言程序是由函数组成的；
 * 2. 什么是函数？函数就是一段具备特定功能的程序段；
 */
int left();

int main(int argc, const char * argv[]) {
    /*
     不使用函数的弊端：
     1. 重复代码太多
     2. 当需求变更，很多地方都需要修改代码；
     */
    /*
     函数的好处：
     1. 提高了代码的复用性，代码更简洁；
     2. 当需求变更，不需要修改很多地方；
     */
    left();
    return 0;
}

// 函数是一段具备特定功能的程序段；
// 定义函数的目的：讲一个功能封装起来，方便复用；
int left() {
    printf("看反光镜。\n");
    printf("向左打方向。\n");
    printf("回正方向。\n");
    printf("通知后方的飞机。\n");
    return 0;
}
