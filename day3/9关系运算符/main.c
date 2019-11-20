//
//  main.c
//  9关系运算符
//
//  Created by Shannon MYang on 2019/11/20.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 在C语言s中，条件成立称为“真”，条件不成立称为“假”，因此，判断条件是否成立，就是判断条件的“真假”l；
    // C语言规定，任何数值都有真假性，任何非0⃣️值都为“真”，只有0⃣️才为“假”。
    /*
     * 关系运算符：
     * >
     * <
     * =
     * >=
     * <=
     * ==
     * !=
     * 关系运算符的返回值只有两种，要么真，要么假。1（真）和0（假）；
     */
    int a = 10;
    int b = 5;
    int result = a > b; // 吗？大于，真。非0⃣️即真。
    printf("result = %i \n", result);
    
    int c = 10;
    int d = 10;
    int answer = c != d;
    printf("answer = %i \n", answer);
    
    // 关系运算符注意点
    // 关系运算符也有优先级， > < >= <= 优先级大于 == !=
    int result1 = 1 == 10 > 5;
    printf("result1 = %i \n", result1);
    
    // 算术运算符的优先级  大于  关系运算符
    //              2   <   4
    int answer1 = 1 + 1 < 2 + 2;
    printf("answer1 = %i \n", answer1);
    
    //关系运算符的结合性：从左至右
    //               1 > 1
    int result2 = 10 > 2 > 1;
    printf("result2 = %i \n", result2);
    
    // 如果优先级和结合性同时存在，先优先级再结合性
    //               11  >   9   == 3 > 1
    //               1 == 3 > 1
    //               1 == 1
    int answer2 = 10 + 1 > 4 + 5 == 3 > 1;
    printf("answer2 = %i \n", answer2);
    
    return 0;
}
