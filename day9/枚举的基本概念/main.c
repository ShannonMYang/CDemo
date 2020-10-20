//
//  main.c
//  枚举的基本概念
//
//  Created by 木溪鱼 on 2020/10/16.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int sex = 0;  // 女
//    int sex = 1;  // 男
    
    // 枚举就是专门用于表示几种固定类型的取值
    // 枚举的本质就是基本数据类型，就是整型
    
    // 枚举和结构体一样，要想定义枚举类型变量，那么必须先定义枚举类型
    /*
     enum 枚举类型名称 {
         取值,
     };
     */
    // 1. 定义枚举类型
    enum Gender {
        male = 6,  // 男  默认情况下，枚举的第0个取值就是整数0
        female,  // 女  第二个取值就是1，后面的取值递增1
        yao  // 2
    };
    
    // 2. 通过枚举类型定义枚举变量
    // 定义枚举变量和定义结构体变量一样，直接将数据类型拷贝过来，空格之后写上变量名称即可
    enum Gender sex;
    sex = male;
    printf("male = %i\n", sex);
    sex = female;
    printf("female = %i\n", sex);
    // ⚠️注意点：由于，枚举类型的本质是整型，所以枚举类型除了可以接收枚举的固定的取值以外，还可以接收其他整型的值
    // 也就是枚举类型的变量可以当做int类型的变量来使用
//    sex = 999;
    
    /*
     要求：定义一个枚举来保存一年四季
     */
    // 1. 定义枚举类型
    /*
     定义枚举类型的规范：
     枚举类型的取值一般以k开头，后面跟上枚举类型的名称，再跟上当前取值的含义
     和结构体一样，枚举类型的名称首字母大写
     */
    enum Season {
        kSeasonSpring,  // spring,
        kSeasonSummer,  // summer,
        kSeasonAutumn,  // autumn,
        kSeasonWinter,  // winter,
    };
    enum Season es;
//    es = winter;
    es = kSeasonAutumn;
    
    return 0;
}
