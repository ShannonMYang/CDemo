//
//  main.c
//  12if基本概念
//
//  Created by Shannon MYang on 2019/11/21.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

/*
 第一种格式：
 if (条件表达式) {
     语句...
 }
 只要 条件表达式 为真，那么就会执行if后面大括号中的内容；
 */

/*
 第二种格式：
 if (条件表达式) {
     语句...
 } else {
     语句...
 }
 只要 条件表达式 为真，那么就会执行if后面大括号中的内容；
 如果 条件表达式 不为真，那么就会执行else后面大括号中的内容；
 规律：两个大括号中的内容，一定会有一个会被执行；
 */
int main(int argc, const char * argv[]) {
    /*
    int age = 17;
    // 判断年龄是否大于等于18岁；
    if (age >= 18) {
        printf("开网卡～ \n");
    }
    printf("end \n");
     */
    
    int age = 19;
    if (age >=18) {
        printf("开网卡 \n");
    } else {
        printf("回家叫家长 \n");
    }
    return 0;
}
