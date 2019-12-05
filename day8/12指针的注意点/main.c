//
//  main.c
//  12指针的注意点
//
//  Created by Shannon MYang on 2019/12/5.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 1. 指针只能保存地址；
    /*
    // 下面是错误示例：
    // int *p = 111;
    // printf("%i \n");
    */

    // 2. 同一个变量可以有多个指针指向它；
    /*
    int num = 111;
    int *p0 = &num;
    // *p0 == num;
    // num = 55;
    *p0 = 555;
    int *p1 = &num;
    int* p2 = p0;
    // 三个内存地址相同；
    printf("%p %p %p\n", &num, p0, p2);
    */
    
    // 3. 指针的指向可以修改；
    /*
    int a = 5;
    int b = 9;

    int* p = &a;
    *p = 55;
    p = &b;
    *p = 44;
    printf("%i \n", a);
    printf("%i \n", b);
    */
    
    // 4. 不要访问野指针；
    /*
    // 没有赋值的指针，我们称之为野指针；
    int* p;
    //int* p = NULL;  // 0;
    printf("%i \n", *p);
    */

    // 5. 指针类型是什么类型，就只能指向什么类型的数据；
    int num = 11;
    char charValue = 'l';
    double doubleValue = 9.9;

    //int* p = &num;
    //printf("%i \n", *p);

    //int* p = &charValue;
    //printf("%c \n", *p);

    //int* p = &doubleValue;
    //printf("%lf \n", *p);
    
    return 0;
}
