//
//  main.c
//  7sizeof运算符
//
//  Created by Shannon MYang on 2019/11/13.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     * sizeof 可以用来计算一个变量或一个常量、一种数据类型所占的内存字节数；
     * 利用sizeof计算的格式：用法：sizeof(常量/变量)；
     * ⚠️注意：sizeof不是一个函数，是一个运算符；
     */
    
    // 计算常量占用的内存字节数
    //int number = sizeof 10;  // 10 是一个整型变量，整型 == int == 4；
    // 如果利用sizeof计算常量，那么可以省略()，但是需要用空格 隔开
    //printf("number = %i\n", number);
    
    // 计算变量
    double doubleValue = 10.9;  // doubleValue是实型，实型 == double == 8；
    // 如果利用sizeof计算变量，那么可以省略()，但是需要用空格 隔开；
    int number = sizeof doubleValue;
    printf("number = %i \n", number);
    
    // 计算数据类型
    // ⚠️注意：如果利用sizeof计算数据类型，()不能省略；
    int number1 = sizeof(char);
    printf("number1 = %i \n", number1);
    
    return 0;
}
