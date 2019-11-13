//
//  main.c
//  5赋值运算符
//
//  Created by Shannon MYang on 2019/11/10.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 最简单的赋值运算，将等号右边的值赋值给等号左边的变量
    // 赋值运算符的结合性：从右至左
    int num = 10;
    
    int a;
    int b;
    a = b = 6;
    printf("a = %i, b = %i \n", a, b);
    
    // 复合赋值运算符
    /*
     * +=
     * -=
     * *=
     * /=
     * %=
     */
    
    int number = 10;
    // number = number + 5;
    number += 5;  // number = number + 5;
    number -= 5;
    printf("number = %i \n", number);
    
    int number2 = 5;
    // 复合运算会先计算等号右边的值，然后再将计算出来的结果和等号左边的值进行计算
    // number2 += 2 + 3 + 4;
    // number2 = (number2 + 2) + 3 + 4;  // 错误
    // number2 = number2 + (2 + 3 + 4);  // 正确
    
    number2 += 2 * 3 * 4;
    // number = number + (2 * 3 * 4);
    printf("number = %i \n", number2);
    
    return 0;
}
