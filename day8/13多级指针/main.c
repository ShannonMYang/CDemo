//
//  main.c
//  13多级指针
//
//  Created by Shannon MYang on 2019/12/5.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

void demo1();
void demo2();
void demo3();

int main(int argc, const char * argv[]) {
    //demo1();
    //demo2();
    demo3();
    return 0;
}

// 一级指针
void demo1()
{
    //一级指针
    char charValue = 'l';

    char* p;
    p = &charValue;

    //charValue = 'n';
    *p = 'n';

    printf("%c \n", charValue);
}

// 二级指针
void demo2()
{
    char charValue = 'l';
    // 1. 拷贝需要指向的变量的数据类型和变量名称；
    // 2. 在数据类型和变量名称之间加上一个*号；
    // 3. 修改变量名称；
    char* charValueP;  // 一级指针

    charValueP = &charValue;

    // 1. 拷贝需要指向的变量的数据类型和变量名称；
    // 2. 在数据类型和变量名称之间加上一个*号；
    // 3. 修改变量名称；
    char** charValuePP;  // 不管有几颗*，只要是指针变量，就占用8个字节；  // 二级指针
    //printf("size = %lu \n", sizeof(charValuePP));
    charValuePP = &charValueP;

    // 此时修改值的几种方式：
    /*
    charValue = 'j';
    printf("%c \n", charValue);
    */

    /*
    // *charValueP == charValue;
    *charValueP = 'm';
    printf("%c \n", *charValueP);
    */

    // &charValue == charValueP
    printf("&charValue = %p \n", &charValue);
    printf("charValueP = %p \n", charValueP);
    // &charValueP == charValuePP
    printf("&charValueP = %p \n", &charValueP);
    printf("charValuePP = %p \n", charValuePP);

    // *charValuePP == 0ffa11 == charValueP
    // **p == p

    // **charValuePP == *(*charValuePP) == *charValueP == 0ffa11 == l
    **charValuePP = 'y';
    printf("%c \n", **charValuePP);
}

void demo3()
{
    char c = 'a';
    char* cp;
    cp = &c;
    char** cpp;
    cpp = &cp;

    /*
     *cp == c;
     *cpp == cp;
     **cpp == *(*cpp) == *cp == c;
     多级指针的操作，最简单的方式，就是通过几颗星来存储，就通过几颗星来访问；
     还有一种方式就是画图，看图片中有几个箭头，有几个箭头就用几颗星来访问；
    */
    printf("c = %c \n", c);
    printf("*cp = %c \n", *cp);
    printf("&c = %p \n", &c);
    printf("cp = %p \n", cp);
    printf("*cpp = %p \n", *cpp);
    printf("**cpp = %c \n", **cpp);
}
