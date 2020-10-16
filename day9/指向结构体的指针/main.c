//
//  main.c
//  指向结构体的指针
//
//  Created by 木溪鱼 on 2020/10/16.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    struct Person0
    {
        int age;
        char *name;
        double height;
    };
    struct Person0 sp0 = {21, "lalala", 1.22};
    
    sp0.name = "hehe";
    sp0.age = 13;
    sp0.height = 1.66;
    printf("name = %s, age = %i, height = %lf\n", sp0.name, sp0.age, sp0.height);
    
    // 定义一个指向结构体的指针
    // *sip0 == sp0;
    struct Person0 *sip0;
    sip0 = &sp0;
    
    // 注意：如果不加括号，会报错。报错的原因是因为.运算符的优先级比*高
    (*sip0).name = "dingdong";
    (*sip0).age = 11;
    (*sip0).height = 1.26;
    printf("name = %s, age = %i, height = %lf\n", (*sip0).name, (*sip0).age, (*sip0).height);
    
    sip0->name = "ooo";
    sip0->age = 21;
    sip0->height = 1.33;
    printf("name = %s, age = %i, height = %lf\n", sip0->name, sip0->age, sip0->height);
    
    /*
     如何定义指向结构体变量的指针
     1. 拷贝结构体类型 和 指针变量名称
     2. 在类型和名称中间加上一个*
     
     当指针指向结构体之后如何利用指针访问结构体
     结构体变量名称.属性;
     (*结构体指针变量名称).属性;
     结构体指针变量名称->属性;
     */
    
//    定义一个int类型的指针
//    int num = 10;
//    int *numP;
//    numP = &num;
//    printf("num = %i\n", *numP);
    
    return 0;
}
