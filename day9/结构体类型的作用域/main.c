//
//  main.c
//  结构体类型的作用域
//
//  Created by 木溪鱼 on 2020/10/15.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

// 如果将变量写到函数或者代码块外面，那么就不是局部变量，而是全局变量
// 全局变量的作用域是从定义的那一行开始，知道文件末尾（暂时先这样理解）
int num;

// 如果将结构体类型写在函数或者代码块外面，那么结构体类型的作用域和全局变量一样，从定义的那一行开始一直到文件末尾
// 相同作用域，不能有同名的结构体类型
struct Person0
{
    int age;
    char *name;
    double height;
};

int main(int argc, const char * argv[]) {
//    int num = 10;
    num = 10;
    return 0;
}

void test1()
{
    num = 55;
//    num = 22;
}

void demo0()
{
    struct Person0
    {
        int age;
        char *name;
        double height;
    };
    
    struct Person0 sp0;
    
    int num = 10;
    {
        struct Dog0
        {
            int age;
            char *name;
        };
        struct Dog0 dg0;
        
        // 在不同的作用域中可以有同名的局部变量，如果访问，采用就近原则
        int num = 23;
        printf("num = %i\n", num);
        
        // 在不同的作用域中可以定义同名的结构体类型，如果使用同名的结构体类型定义结构体变量，采用就近原则
        struct Person0
        {
            int age;
            char *name;
            double height;
        };
        
        struct Person0 sp0 = {30, "aaa", 15};
    }
//    num = 56;
//    struct Dog0 dg1;
}

void test0()
{
    // 1. 如果结构体定义在函数或者代码块中，那么结构体类型的作用域和变量的作用域一样，从定义的那一行开始，一直到函数结束或者到代码块结束
//    struct Person0 sp0;
}
