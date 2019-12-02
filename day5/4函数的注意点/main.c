//
//  main.c
//  4函数的注意点
//
//  Created by Shannon MYang on 2019/12/2.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

// 1. 如果"基本数据类型"(char int double float)作为函数的参数，在函数中修改形参的值，不会影响到外面实参的值;
// 2. 实参的个数，必须和形参的个数相同;
/*
int getMin(int v1, int v2)
{
    // 注意:在函数中修改形参的值，不会影响到外面实参的值(当然也有一定的前提);
    v1 = 50;
    int min = v1 < v2 ? v1 : v2;
    return min;
}
*/
// 3. 返回值可以和返回值类型不一样，但是如果返回值和返回值类型不一样的时候 \
      系统会对返回值进行自动类型转换(隐式类型转换)，将返回值转换为返回值类型
// 注意：在企业级开发中千万不要这样写；
// 4. 函数可以有形参，也可以没有形参；
int getHeight()
{
    return 1.75;
}
// 5. 函数可以有返回值，也可以没有返回值；
// 如果函数没有返回值，那么返回值类型就写void；
// 如果函数没有返回值，那么可以不写return，但是如果写了return也不会报错；
void printRose()
{
    printf("{@}\n");
    printf(" |\n");
    printf("\\|/\n");  // 在C语言中，\有特殊含义，它是一个转义字符；
    printf(" |\n");
}
// return的应用场景
// 1. 用于在函数中返回结果给函数调用者；
// 2. 结束函数；
// 3. 提前结束函数；
// 4. return后面不可以写任何语句，因为执行不到；break、continue类同；
/*
login(username, password)
{
    // 1. 用户只输入了帐号；
    // 2. 用户只输入了密码；
    // 如果用户只输入了帐号或者密码，就没有必要发送请求；
    if (username == NULL) {
        return;
    }
    if (password == NULL) {
        return;
    }
    // 发送网络请求，将用户的帐号和密码上传；
    // post请求
}
*/
// 7. 函数名称不能相同；
// 7.1 形参列表不同也不可以
// 7.2 返回值类型不同也不可以
/*
void test()
{
    
}
void test()
{
    
}
void test(int a, int b)
{
    
}
int void()
{
    
}
*/
// 8. 函数不能嵌套定义
/*
void test()
{
    void demo()
    {
        
    }
}
*/
// 9. C语言是弱语言
// 9.1 函数可以没有返回值类型；
// 如果函数没有写返回值类型，那么默认就是int类型；
test()
{
    return 1.2;
}
int main(int argc, const char * argv[]) {
    /*
    // 需求：获取两个数的最小值
    int a = 10;
    int b = 20;
    int result = getMin(a, b);
    prinft("result = %i \n", result);
    printf("a = %i, b = %i \n", a, b); q
    */
    /*
    int height = getHeight();
    printf("height = %i \n", height);
    */
    /*
    // 需求：打印一朵玫瑰花
    printRose();
    */
    double result = test();
    printf("result = %f \n", result);
    return 0;
}
