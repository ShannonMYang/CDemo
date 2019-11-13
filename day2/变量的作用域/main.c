//
//  main.c
//  变量的作用域
//
//  Created by Shannon MYang on 2019/10/25.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
//    number = 10;
    int number;  // 变量有自己的作用域；
    // 变量的作用域从定义的那一行开始，一直到大括号结束；
    number = 10;
    printf("%i\n", number);
    // 结束函数，只要执行到 return 就和执行到 } 一样，代表着函数结束了
    return 0;
    printf("%i\n", number);
     */
    
    // 内存寻址从大到小，如果按照这种规则，那么先定义的变量内存地址一定大于后定义的变量；
    int number = 10;
    int value = 5;
    // 如何获取变量的详细地址（变量的地址），&变量名称；
    // 利用%p占位符打印变量的详细地址
    // 输出的是一个十六位进制的数
    // a/b/c/d/e/f
    // 10/11/12/13/14/15
    printf("%p\n", &number);
    printf("%p\n", &value);
    return 0;
}
