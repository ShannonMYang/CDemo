//
//  main.c
//  结构体和函数
//
//  Created by 木溪鱼 on 2020/10/16.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

struct Person {
    int age;
    char *name;
};

//void change(int value);
//void change(struct Person value);
void change(struct Person *p);

int main(int argc, const char * argv[]) {
    
    /*
     struct Person sp = {30, "ooo"};
     // 1. 将结构体的属性传递给函数，在函数中修改形参不会影响到实参
     printf("age = %i\n", sp.age);
 //    change(sp.age);
     // 2. 将结构体名称作为参数传递，在函数中修改形参不会影响到实参
     // 结构体之间赋值是值传递，系统会将A结构体的值，拷贝一份到B结构体当中
     change(sp);
     printf("age = %i\n", sp.age);
     */
    
    /*
    struct Person sp1 = {30, "ooo"};
    struct Person sp2 = sp1;  // 结构体之间赋值是值传递，相当于拷贝
    printf("sp1.age = %i\n", sp1.age);
    sp2.age = 998;
    printf("sp1.age = %i\n", sp1.age);
    printf("sp2.age = %i\n", sp2.age);
    */
    
    struct Person sp1 = {30, "ooo"};
    printf("sp1.age = %i\n", sp1.age);
    change(&sp1);
    printf("sp1.age = %i\n", sp1.age);
    
    return 0;
}

//void change(int value)
//void change(struct Person value)
void change(struct Person *p)  // 形参只要是地址，修改形参，就会改变实参
{
//    value = 99;
//    value.age = 100;
    p->age = 555;
}
