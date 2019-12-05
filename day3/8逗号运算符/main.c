//
//  main.c
//  8逗号运算符
//
//  Created by Shannon MYang on 2019/11/14.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 5;
    int result;
    // 结合性 从左至右
    // a = 15, b = 6, result = 15 + 6 = 21;
    a = a + 5, b = b + 1, result = a + b;
    printf("a = %i, b = %i, result = %i \n", a, b, result);
    
    // 只要是运算符，那么一定会有运算结果，逗号s运算符也不例外
    // 逗号运算符的结果是：最后一个表达式的结果
    
    int c = 11;
    int d = 6;
    // 7          a = 11 + 5 = 1, b = 6 + 1 = 7
    int answer = ((c = c + 5), (d = d + 1));  //仅仅作为了解
    printf("c = %i, d = %i, answer = %i \n", c, d, answer);
    return 0;
}
