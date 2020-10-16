//
//  main.c
//  结构体的嵌套定义
//
//  Created by 木溪鱼 on 2020/10/16.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     struct Person {
         int age;  // 年龄
         char *name;  // 姓名
         
         // 出生日期
         int year;
         int month;
         int day;
         
         // 出生时辰
         int HH;  // 24小时
         int mm;  // 分钟
         int ss;  // 秒钟
         
         // 入学日期
         int year1;
         int month1;
         int day1;
         
         // 毕业日期
         int year2;
         int month2;
         int day2;
     };
     
     struct Person sp = {30, "xxx", 1994, 06, 23, 13, 12, 23};
     */
    
    // 定义一个时间结构体类型
    struct Time {
        int HH;  // 24小时
        int mm;  // 分钟
        int ss;  // 秒钟
    };
    struct Date {
        int year;
        int month;
        int day;
        struct Time time;
    };
    
    struct Person {
        int age;  // 年龄
        char *name;  // 姓名
        
        // 出生日期
        struct Date birth;
        // 出生时辰
//        struct Time time;
        
        // 小学入学时间
        struct Date allowIn;
        // 小学毕业时间
        struct Date allowOut;
        // ...
    };
    struct Person sp = {
        30,
        "xxx",
        {1998, 1, 1, {13, 14, 15}},
        {2005, 9, 1},
        {2011, 6, 30}
    };
    // 注意：如果结构体的属性又是一个结构体，那么可以通过连续.的方式，访问结构体属性中的属性
    // 如果结构体类型中的属性又是一个结构体，那么赋值的时候通过{赋值}
    printf("year = %i, month = %i, day = %i\n", sp.birth.year, sp.birth.month, sp.birth.day);
    return 0;
}
