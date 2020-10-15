//
//  main.c
//  结构体的定义方式
//
//  Created by 木溪鱼 on 2020/10/15.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 1. 先定义结构体类型，再定义结构体变量
    struct Person0
    {
        int age;
        char *name;
        double height;
    };
    struct Person0 sp0;
    
    // 2. 定义结构体类型的同时定义结构体变量
    struct Person1
    {
        int age;
        char *name;
        double height;
    } sp1;
    // 数据类型 变量名称
    sp1.age = 23;
    printf("sp1's age = %i \n", sp1.age);
    
    struct Person1 sp1_1;
    sp1_1.name = "lalala";
    printf("sp1_1's name = %s\n", sp1_1.name);
    
    // 3. 定义结构体类型的同时定义结构体变量，并且省略结构体名称
    // 如果在定义结构体类型的同时定义结构体变量，那么就可以省略结构体类型的名称
    // 弊端：由于结构体类型没有名称，所以以后就不能使用该结构体类型
    // 优点：如果结构体类型只需要使用一次，那么可以使用该方式
    struct
    {
        int age;
        char *name;
        double height;
    } sp2;
    sp2.age = 12;
    printf("sp2's age = %i\n", sp2.age);
    
    return 0;
}
