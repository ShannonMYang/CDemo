//
//  main.c
//  9递归练习1
//
//  Created by Shannon MYang on 2019/12/5.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int myPow(int base, int n);

int main(int argc, const char * argv[]) {
    /*
     设计一个函数来计算B的N次方；
     b = 2;
     n = 3;
     
     int result = b(3);
     b(0) = 1;
     b(1) = b(0) * b;
     b(2) = b(1) * b;
     b(3) = b(2) * b;
     b(n) = b(n - 1) * b;
     
     2(3)
     2 * 2 * 2;
     result = 2 * 2;
     result = result * 2;
     用上一次的结果 * 2
     */
    int a = 2;
    int b = 3;
    myPow(a, b);
    return 0;
}

int myPow(int base, int n)
{
    // 定义变量保存计算的结果
    int result = 1;
    for (int i = 0; i < n; i++) {
        printf("%i * %i \n", result, base);
        result = result * base;
    }
    return result;
}
