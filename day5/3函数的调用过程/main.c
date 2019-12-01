//
//  main.c
//  3函数的调用过程
//
//  Created by Shannon MYang on 2019/12/1.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

// 注意：形参列表中的变量只有当函数被调用时才会分配存储空间；
// 形参列表中的每一个变量我们称之为，形式参数，简称形参；
int average(int v1, int v2)
{
    int average = (v1 + v2) / 2;
    return average;
}
int main(int argc, const char * argv[]) {
    // 需求：求两个数的平均值；
    int a = 10;
    int b = 20;
    // 调用函数时传入的参数，我们称之为实际参数，简称实参；
    int result = average(a, b);
    printf("result = %i \n", result);
    return 0;
}
