//
//  main.c
//  3算术运算符的优先级和结合性
//
//  Created by Shannon MYang on 2019/11/10.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 1.算术运算符的优先级和结合性
    // 算术运算符，它是左结合性，从左向右计算
    int result = 3 + 4 + 5 + 6 + 7;
    // 算术运算符中 * / % 优先级大于 + -
    result = 3 + 4 * 5 + 6 % 7;
    printf("result = %i \n", result);
    return 0;
}
