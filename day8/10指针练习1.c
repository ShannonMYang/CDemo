//
//  main.c
//  10指针练习1
//
//  Created by Shannon MYang on 2019/12/05.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

void swap(int* v1, int* v2)
{
    // int *v1 =&a, int *v2 = &b; v1 = 0ffa13 v2 = 0ffa9
    // *v1 == a, *v2 == b
    int temp = *v1;  // int temp = 0ffa13
    *v1 = *v2;
    *v2 = temp;
}

int main(int argc, const char* argv[]) {
    // 定义一个函数交换两个变量的值
    int a = 10;  // 0ffa13
    int b = 11;  // 0ffa9
    printf("交换前: a = %i, b = %i \n", a, b);
    /*
    老方法实现，两个数，值的交换；
    int temp = a;
    a = b;
    b = temp;
    */
    
    swap(&a, &b);
    printf("交换后: a = %i, b = %i \n", a, b);
    return 0; 
}
