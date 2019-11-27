//
//  main.c
//  15if注意点
//
//  Created by Shannon MYang on 2019/11/27.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Xcode移动代码快捷键：
    // 上下移动：command + optain + ](上) / [(下)
    // 左右移动：command + ](右) / [(左)
    
    /*
     int age = 18;
     if (age >= 18) {
     printf("开卡 \n");
     }
     */
    
    /*
     // 因为C语言中，任何数值都有真假性，非0即真；
     if (1) {
     printf("来这儿 \n");
     } else {
     printf("不去\n");
     }
     */
    
    // 尤他表达式
    /*
     int age = 11;
     */
    // ==  =
    /*
     if (age = 18) {  //18
     printf("开卡 \n");
     }
     */
    //如果以后要判断某一个变量是否等于某一个值，建议采用尤他表达式，即场常量写前面，变量写后面；
    /*
     if (18 == age) {
     printf("开卡 \n");
     }
     printf("end \n");
     */
    
    /*
     // if如果省略大括号，就会管理离他最近的一条语句，而;是一条空语句
     if (0);
     printf("Shannon \n");
     */
    
    /*
     // 如果要在if后面定义变量，那么必须协商大括号；
     if (1)
     int number = 10;  // 这句报错
     printf("number = %i \n", number);
     */
    
    // 如果 if,else 省略大括号，那么else会匹配l距离他最近的一个if
    //    if(0)
    //    if(1)
    //    printf("A \n");
    //    else
    //    printf("B \n");
    //    else
    //    if(1)
    //    printf("C \n");
    //    else
    //    printf("D \n");
    
    // 以上代码等价于：
    //    if(0)
    //        if(1)
    //        printf("A \n");
    //        else
    //        printf("B \n");
    //    else
    //        if(1)
    //        printf("C \n");
    //        else
    //        printf("D \n");
    
    // 近一步等价于：
    if (0) {
        if (1) {
            printf("A \n");
        }
        else {
            printf("B \n");
        }
    }
    else {
        if (1) {
            printf("C \n");
        }
        else {
            printf("D \n");
        }
    }
    
    printf("end \n");
    
    return 0;
}
