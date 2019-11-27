//
//  main.c
//  13if练习
//
//  Created by Shannon MYang on 2019/11/26.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     * 判断奇偶数
     */
    // 从键盘输入一个整数，判断其是否是偶数，如果是偶数就输出YES，否则输出NO；
    
    /*
    // 1. 提示用户输入一个整数
    printf("请输入一个整数，以回车结束 \n");
    // 2. 定义变量保存用户输入的整数
    int number = -1;
    // 3. 接收用户输入的整数
    scanf("%i", &number);
    // 4. 判断是否是偶数（偶数的特点：可以被2整除，没有余数）
    int result = number % 2;

    if (result == 0) {
        // 5. 输出结果
        printf("YES \n");
    }
    else {
        // 5. 输出结果
        printf("NO \n");
    }
    */


    /*
     * 输出对应星期
     */
    // 接收用户输入的 1~7 的整数，根据用户输入的整数，输出对应的星期几；
    /*
    // 1. 提示用户输入 1~7的整数
    printf("请输入一个 1~7 的整数，以回车结束 \n");
    // 2. 定义变量保存
    int number = -1;
    // 3. 接收用户输入的整数
    scanf("%i", &number);
    // 4. 判断用户输入的整数，输出对应的结果
    // 4.1. 排除非法数据
    
    // if (number > 7 && number < 1) {
    //     printf("URSB \n");
    //     return 0;  // 结束函数
    // }
    
    if (number > 7 && number < 1) {
        printf("URSB \n");
    }
    else if (number == 1) {
        printf("星期1 \n");
    }
    else if (number == 2) {
        printf("星期2 \n");
    }
    else if (number == 3) {
        printf("星期3 \n");
    }
    else if (number == 4) {
        printf("星期4 \n");
    }
    else if (number == 5) {
        printf("星期5 \n");
    }
    else if (number == 6) {
        printf("星期6 \n");
    }
    else if (number == 7) {
        printf("星期7 \n");
    }
    // 为了验证用
    printf("其他操作 \n");
    */


    /*
     * 输出对应季节
     */
    // 接收用户输入的一个整数month代表月份，根据月份输出对应的季节；
    // 3~5 春季；6~8 夏季；9~11 秋季；12 1 2 冬季；
    /*
    // 1. 提示用户输入一个整数
    printf("请输入一个整数，以回车结束 \n");
    // 2. 定义变量保存用户输入的整数
    int number = -1;
    // 3. 接收用户输入的整数
    scanf("%i", &number);
    // 4. 根据用户输入的整数，输出对应的季节
    // 1. 一种方式
    // if (number >= 3 && number <=5) {
    //     printf("春季 \n");
    // }
    // else if (number >= 6 && number <= 8) {
    //     printf("夏季 \n");
    // }
    // else if (number >= 9 && number <= 11) {
    //     printf("秋季 \n");
    // }
    // else if (number == 12 || number == 1 || number == 2) {
    //     printf("冬季 \n");
    // }
    // else{
    //     printf("地球盛不下你 \n");
    // }
    
    // 2. 另一种方式
    if (number > 12 || number < 1) {
        printf("地球盛不下你 \n");
    }
    else if (number >= 3 && number <=5) {
        printf("春季 \n");
    }
    else if (number >= 6 && number <= 8) {
        printf("夏季 \n");
    }
    else if (number >= 9 && number <= 11) {
        printf("秋季 \n");
    }
    else {
        printf("冬季 \n");
    }
    */
   /*
    // 李佳、方俊利、牛瑞、刘笑笑、刘福亚、唐秀丽
    // 肖利云、江飞、李严、郭田田、陈秀莲、齐翠肖
    // 郭丹、程荟岭、尤家萌、袁彧莹、袁翠丽、邸冰玉
    // 张文亚、郭春亚、万晓彤
    */
    /*
     * 获取两个数最值
     */
    // 从键盘输入两个整数，判断大小后输出比较大的那个整数；
    /*
    // 1. 提示用户输入两个整数
    printf("请输入两个整数，以逗号分隔，以回车结束 \n");
    // 2. 定义变量保存用户输入的整数
    int number1 = -1;
    int number2 = -1;
    // 3. 接收用户输入的整数
    scanf("%i,%i", &number1, number2);
    // 4. 比较两个数的大小
    // 三目运算符可以简化 if else 操作，如果仅仅是为了获取某个值，那么建议使用三目运算符；
    // if else: 可以用来做一些更复杂的操作。例如判断完毕之后还需要进行一些后续处理

    // 1.一种方式
    // int max = number1 > number2 ? number1 : number2;

    // 2. 另一种方式
    int max = -1;  // 保存最大值
    if (number1 > number2) {
        max = number1;
    }
    else {
        max = number2;
    }
    printf("max = %i \n", max);
    */
   /*
    // 抖音账号：ly950808、Xiebingbing
    
    // 手机号：15037671070杨文静(短信炸死)、17724706279谢冰冰(短信炸死)、15970567295罗昱
    
    // WeChat：谢冰冰：suiyuan168188、nue9744
    
    // 「多态zpn」
    // 邮箱：1455614585@qq.com
    // 密码：707195abc
    // 邀请码：B15F-FC4C-80E0-C0
    // 手机号：15970567295
    // 昵称：雨
    */
    /*
     * 获取三个数最值
     */
    // 从键盘输入三个整数，判断大小后输出比较大的那个数
    /*
    // 1. 提示用户输入三个整数
    printf("请输入三个整数，以逗号分隔，以回车结束 \n");
    // 2. 定义变量保存用户输入的整数
    int number1 = -1;
    int number2 = -1;
    int number3 = -1;
    // 3. 接收用户输入的整数
    scanf("%i,%i,%i", &number1, &number2, &number3);
    // 4. 获取最值
    int max = -1; //保存最大值
    // 1. 一种方式
    // max = number1 > number2 ? number1 : number2;
    // max = max > number3 ? max : number3;
    // printf("max = %i \n", max);
    
    // 2. 另一种方式
    // if (number1 > number2 && number1 > number3) {
    //     max = number1;
    // }
    // else if (number2 > number1 && number2 > number3) {
    //     max = number2;
    // }
    // else if (number3 > number1 && number3 > number2) {
    //     max = number3;
    // }
    // printf("max = %i \n", max);

    // 3. 还有一种方式
    if (number1 > number2) {
        // 代表number1当前最大
        if (number1 > number3) {
            max = number1;  // number1 最大
        }
        else {
            max = number3;  // number3 最大
        }
    }
    else if (number2 > number3) {  // 此时此刻number2是最大的
        // 代表number2当前最大
        max = number2; 
    }
    else {
        max = number3;
    }
    printf("max = %i \n", max);
    */


    /*
     * 排序
     */
    // 从键盘输入3个整数，排序后输出；
    // 1. 提示用户输入一个整数
    printf("请输入三个整数，以回车结束 \n");
    // 2. 定义变量保存用户输入的整数
    int number1 = -1;
    int number2 = -1;
    int number3 = -1;
    // 3. 接收用户输入的整数
    scanf("%i,%i,%i", &number1, &number2, &number3);
    // 4. 排序
    // 如何交换两个变量的值
    /*
    int a = 10;  //可乐
    int b = 5;  //雪碧
    int temp = -1;  //盆子
    printf("交换前: a = %i, b = %i \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("交换后: a = %i, b = %i \n", a, b);
    */
   // 4.1 利用number1和number2进行比较，如果number1小于number2，交换两个变量的值；

    return 0;
}
