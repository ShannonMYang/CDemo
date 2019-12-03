//
//  main.c
//  8递归函数
//
//  Created by Shannon MYang on 2019/12/3.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

void scanfNumber();

int main(int argc, const char * argv[]) {
    // 需求：要求用户输入一个大于0的数，如果用户输入的数不大于0 \
    那么就一直重复的提醒用户重新输入，直到用户输入的值大于0为止；
    /*
    int number = -1;
    while (number < 0) {
        printf("请输入一个大于0的整数，以回车结束 \n");
        scanf("%i", &number);
    }
    printf("number = %i \n", number);
     */
    
    // 一般情况下，能用循环做的事情，用递归函数都能做；
    // 但是要注意：不是什么时候都使用递归，递归要慎用（性能问题）；
    // 什么是递归函数，函数自己调用自己；
    scanfNumber();
    // 注意：递归一定要有一个明确的结束条件。否则就会造成死循环（无限循环）
    return 0;
}

void scanfNumber()
{
    // 1. 接收用户输入的值
    int number = -1;
    printf("请输入一个大于0的整数，以回车结束 \n");
    scanf("%i", &number);
    
    // 2. 判断用户输入的值是否合法
    if (number < 0) {
        // 不合法，需要重新输入
        // 函数可以自己调用自己
        scanfNumber();
    }
    else {
        printf("number = %i \n", number);
    }
}
