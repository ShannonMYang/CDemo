//
//  main.c
//  9指针基本概念
//
//  Created by Shannon MYang on 2019/12/4.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>
// 基本数据类型作为函数的参数是值传递，在函数中修改形参的值不会影响到外面实参的值；
void change(int value)
{
    value = 55;
    printf("%s \n",__func__);
}

// 数组作为函数的参数，是地址传递；如果是地址传递在函数中修改形参的值会影响到外面实参的值；
void change2(int values[])
{
    values[1] = 88;
    printf("%s \n", __func__);
}


// 指针就是专门用来保存地址的
void change3(int *p)  // 用什么接收地址? 指针 = 0ff133; int *p = &num;
{
    *p = 55;
    printf("%s \n", __func__);
}
 
int main(int argc, const char * argv[]) {
    /*
    // 需求：定义一个方法，在函数中修改传入的实参的值；
    int num = 10;
    printf("修改前：num = %i \n", num);
    change(num);
    printf("修改后：num = %i \n", num);
     */
    
    /*
    int nums[] = {1, 3};
    printf("修改前：nums[1] = %i \n", nums[1]);
    change2(nums);
    printf("修改后：nums[1] = %i \n", nums[1]);
     */
    
    
    int num = 10;
    printf("修改前：num = %i \n", num);
    change3(&num);
    printf("修改后：num = %i \n", num);
    
    /*
     * 如何定义指针变量
     * 普通变量：
     * 数据类型 变量名称;
     *
     * 指针变量：
     * 数据类型 * 变量名称;
     *
     * 数据类型： 说明将来指针变量能够保存什么类型的变量的地址
                注意：指针变量是什么类型，那么将来就只能保存什么类型变量的指针，
                例如：指针变量是int类型，那么将来就只能保存int类型变量的地址
     * *：没有任何特殊含义，仅仅是为了标示这是一个指针变量；
     * 变量名称：用于区分不同的变量；
     */
    /*
    int num2;  //普通变量
    num2 = 10;
    int *p;  //指针变量，在64位编译器下占用8个字节；
    // 千万注意：指针变量只能存储地址；
    p = &num2; // 将num2的地址存储到p这个指针中；
    printf("%lu \n", sizeof(p));
    // p == &num2
    printf("num2 = %p \n", &num2);
    printf("p = %p \n", p);
    
    // 指针变量前的*号代表访问指针变量指向的那一块存储空间；
    // *p == num
    num2 = 22;
    *p = 55;
    printf("num2 = %i \n", num2);
     */
    
    return 0;
}
