//
//  main.c
//  4类型转换
//
//  Created by Shannon MYang on 2019/11/10.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 自动类型转换（隐式转换）
    int number = 10.8;  // number，占4个字节；10.8，占8个字节；
    printf("number = %i \n", number);
    
    // 强制类型转换（显示转换）
    // 格式：(需要转换的类型)需要转换的数据
    // 注意⚠️：无论是隐式转换还是显示转换，只要将一个大类型的数据，转换为小类型的数据，那么就有可能丢失精度
    int numberTwo = (int)10.9;
    printf("numberTwo = %i \n", numberTwo);
    
    // 在运算的过程中，其实还做了一次自动类型提升
    // 算术运算符规定：只有相同类型的数据才可以进行运算
    // 如果在计算过程中，参与运算的操作数不是同一类型，那么系统自动将小类型转换为大类型，然后进行计算
    int result = 10 + 8.8;  // int + double
    /*
     * 过程
     * int result = 10.0 + 8.8 == 18.8
     */
    printf("result = %i \n", result);
    
    // 算术运算符注意点⚠️：参与s运算的操作数是什么类型，那么计算出来的结果就是什么类型
    int result2 = 1 / 2;  // int int 结果 int
    printf("result2 = %i \n", result2);
    double result3 = 1 / 2;  // int int 结果 int
    printf("result3 = %f \n", result3);
    double result4 = 1.0 / 2;  // 1.0 / 2.0 == 0.5;
    printf("result4 = %f \n", result4);
    double result5 = (double)(1 / 2);  // 这种写法是错误的写法
    result5 = (double)1 / 2;  // 这种写法是正确的写法，一般不这么写；
    printf("result5 = %f \n", result5);
    
    return 0;
}
