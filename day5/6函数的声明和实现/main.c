//
//  main.c
//  6函数的声明和实现
//
//  Created by Shannon MYang on 2019/12/3.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

// 以前我们在定义函数的时候，一直都是把函数定义在main函数的前面；
// C语言规定：一般情况下，如果想要调用一个函数，该函数必须在调用之前出现；

// 函数的声明
// 函数的声明的作用：在调用函数之前，告诉系统有这个函数 \
   并且告诉系统，该函数叫什么名字，接收什么参数，返回什么类型的值；
void printRose();

// 声明的其他写法
//int sum(int, int);

// 函数的声明可以重复，但不这么写；
/*
int sum(int, int);
int sum(int, int);
int sum(int, int);
 */

int main(int argc, const char * argv[]) {
    printRose();
    
    // 函数的声明，只需要在函数被使用之前告诉系统就可以了，它可以z写在函数的外面，也可以写在函数的里面；
    int sum(int, int);
    int result = sum(10, 20);
    printf("result = %i \n", result);
    return 0;
}

// 完整的实现了函数的n功能的代码，称之为函数的定义（函数的实现）
void printRose()
{
    printf("{@}\n");
    printf(" |\n");
    printf("\\|/\n");  // 在C语言中，\有特殊含义，它是一个转义字符；
    printf(" |\n");
}

// 注意：如果函数的返回值是int类型，那么不用写声明，函数也不会报错； \
   但是还是建议写声明；
int sum(int v1, int v2)
{
    return v1 + v2;
}

// C语言是不允许重复定义（实现）同名称的函数
/*
int sum(int v1, int v2)
{
    return v1 + v2;
}
*/
