//
//  main.c
//  6自增自减
//
//  Created by Shannon MYang on 2019/11/13.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //int result = 10;
//    result = result + 5;  // 结果为 15
//    result += 5;  // 结果为 15
    
//    result = result + 1;  // 结果为 11
//    result += 1;  // 结果为 11
    
    // 自增：如果想让谬一个数 +1 可以使用自增
//    result++;
//    result++;
    
//    result = result - 1;
//    result -= 1;
    // 自减：如果想让某一个数 -1 可以使用自减
//    result--;
    
    // 自增的两种写法
//    result++;
//    ++result;
    // 自减的两种写法
//    result--;
//    --result;
    
//    printf("result = %i\n", result);
    
    // -------------------------------------------------------
    
    // 自增、自减 写在前面、写在后面 的 区别
    // 如果++写在变量的前面，那么会先将变量自增，再用自增之后的结果参与运算；
    // 如果++写在变量的后面，那么会先将变量的值参与运算，再将变量自增；
    // 总结一句话：++在前，先自增再运算；++在后，先运算再自增；
    int a = 10;
    int b = a++; // b = 10, a = 11;
    // int b = a; a = a + 1;
    // 结果 a = 11, b = 10
//    int b = ++a; // b = 11, a = 11;
    // a = a + 1; b = a;
//    int b = --a; // b = 9, a = 9;
    printf("a = %i, b = %i \n", a, b);
    
    // 无论 ++ 在前还是在后，最终都会自增一次
    int c = 10;
    //       10      12
    //int d = (c++) + (++c);
    // c = 12;
    // d = 22
    
    //       10      11
    //int d = (c++) + (c++);
    // c = 12;
    // d = 21;
    
    //       11      12
    int d = (++c) + (++c);
    // c = 12;
    // d = 23;
    printf("c = %i, d = %i\n", c, d);
    
    
    return 0;
}
