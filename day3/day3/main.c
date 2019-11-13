//
//  main.c
//  day3
//
//  Created by Shannon MYang on 2019/11/10.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

// 算术运算符
int main(int argc, const char * argv[]) {
    /*
     * + 加法
     * - 减法
     * * 乘法
     * / 除法
     * % 取模（取余）
     */
    
    // 1.定义变量保存计算结果
    int result;
    // 2.开始计算
    result = 1 + 1;
    result = 1 - 1;
    result = 2 * 2;
    // 注意：取模运算只能用于整数
    result = 10 % 3;
    result = 12 % 3;
    // 取模运算的正负数取决于左边的操作数，如果左边为负数，那么结果就是负数
    result = -10 % 3;
    // 如果取模运算的左边小于右边，那么结果就是左边
    result = 3 % 9;
    // 3.验证计算结果
    printf("result = %i \n®", result);
    return 0;
}
