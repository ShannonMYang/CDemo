//
//  main.c
//  2函数的定义
//
//  Created by Shannon MYang on 2019/12/1.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

/*
 函数的定义格式：
 返回值类型 函数名称(形参列表)
 {
     函数体;  //语句;...
 }
 */
/*
 初学者如何定义函数：
 应该有三个确定：
 1. 确定函数名称（给函数起一个有意义的名称，让调用者一看到名称就知道这个函数是干啥的）
    1.1 函数是标识符的一种，遵守规则：26个字母，数字，下划线组成；遵守规范：驼峰命名；
 2. 确定形参列表
    2.1 形参列表的格式(数据类型 变量名称, ...)
    2.2 如何确定形参列表？就看看以后调用函数时，是否需要传递一些辅助的数据给函数；
 3. 确定返回值
 4. 确定返回值类型
    4.1 return 的是什么类型，那么返回值类型就写什么类型
 */
int getMax(int v1, int v2)
{
    int max = v1 > v2 ? v1 : v2;
    /*
     return 有两个作用：
     1. 返回数据给函数调用者；
     2. 结束函数；
     */
    return max;
}

int main(int argc, const char * argv[]) {
    // 需求：要求获取两个数的最大值
    int a = 10;
    int b = 20;
//    int max = a > b ? a : b;
    
    int max = getMax(a, b);
    printf("max = %i \n", max);
    
    int m = 998;
    int n = 666;
    int max2 = m > n ? m : n;
    printf("max2 = %i \n", max2);
    return 0;
}
