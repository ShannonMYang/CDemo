//
//  main.c
//  结构体的初始化
//
//  Created by 木溪鱼 on 2020/9/28.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
    int nums[] = {1, 3, 5};
    
    int numss[3];
    numss[0] = 1;
    numss[1] = 3;
    numss[2] = 6;
    
    int numsss[3];
    numsss = {1, 3, 9};  // 错误。不能先定义，再进行一次性（完全）初始化。
     
    int num1[3] = {[1] = 2};
    printf("nums[0] = %i\n", nums[0]);
    */
    struct Cat {
        char *name;
        int age;
        double height;
    };
    // 1. 定义的同时进行初始化
    struct Cat cat0 = {"mi", 8, 20};
    // 2. 先定义再进行初始化（逐个初始化）
    struct Cat cat1;
    cat1.name = "vivo";
    cat1.age = 9;
    cat1.height = 15;
    // 3. 先定义再进行初始化（一次性初始化）
    struct Cat cat2;
//    cat2 = {"oppo", 4, 12};  // 数组？结构体？报错是因为区分不清楚。
    /*
      特别注意：结构体和数组有一点区别，数组不能先定义再进行一次性的初始化，而结构体可以
      只不过需要明确的告诉系统{}中是一个结构体，即做强制转换
     */
    cat2 = (struct Cat){"oppo", 4, 12};  // 做一个强制转换
    // 4. 指定将数据赋值给指定的属性
    struct Cat cat3 = {.height = 17, .name = "meizu", .age = 6};
    // 取值
    printf("name = %s, age = %i, height = %lf\n", cat3.name, cat3.age, cat3.height);
    
    return 0;
}
