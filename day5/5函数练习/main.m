//
//  main.m
//  5函数练习
//
//  Created by Shannon MYang on 2019/12/17.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 【理解】写一个函数打印一朵玫瑰花
 【理解】写一个函数打印N朵玫瑰花
 【理解】写一个函数从键盘输入三个整型数字，找出其最大值
 【理解】写一个函数求三个数的平均值
 */

void printRose()
{
    printf("{@}\n");
    printf(" |\n");
    printf("\\|/\n");  // 在C语言中，\有特殊含义，它是一个转义字符；
    printf(" |\n");
}

void printRoses(int value)
{
    for (int i = 0; i < value; i++) {
        printf("{@}\n");
        printf(" |\n");
        printf("\\|/\n");  // 在C语言中，\有特殊含义，它是一个转义字符；
        printf(" |\n");
    }
}

int getMax(int v1, int v2, int v3)
{
    int temp = v1 > v2 ? v1 : v2;
    int max = temp > v3 ? temp : v3;
    return max;
}

int average(int v1, int v2, int v3)
{
    int average = (v1 + v2 + v3) / 3;
    return average;
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
//        printRose();
        
//        int number = 5;
//        printRoses(number);
        
//        printf("请输入三个整数，用逗号隔开，以回车结束 \n");
//        int num1, num2, num3;
//        scanf("%i, %i, %i", &num1, &num2, &num3);
//        int result = getMax(num1, num2, num3);
//        printf("result = %i \n", result);
        
        printf("请输入三个整数，用逗号隔开，以回车结束 \n");
        int num1, num2, num3;
        scanf("%i, %i, %i", &num1, &num2, &num3);
        int result = average(num1, num2, num3);
        printf("result = %i \n", result);
    }
    return 0;
}
