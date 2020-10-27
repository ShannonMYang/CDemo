//
//  test0.c
//  内部全局变量和外部全局变量
//
//  Created by 木溪鱼 on 2020/10/26.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include "test0.h"

/*
 int num;  // 由于Xcode升级之后导致的，在Xcode6之前是可以的
 如果直接在 test0.c 当中定义外部全局变量num，那么我们说过同名的外部全局变量指向同一块存储空间，
 那么如果在多个文件中有同名的外部全局变量，可能导致A文件的数据被B文件的数据不小心修改了
 降低了数据的封装性，提高了发生错误的概率
*/

/*
 extern 关键字用来修饰全局变量，代表声明一个全局变量
 ⚠️注意：声明全局变量和声明函数一样，仅仅是告诉系统我们有这个全局变量，但并不会真的开辟存储空间
 */
//extern int num;
//static int num;
int num;

void test()
{
    printf("test0.c 中的 num = %i \n", num);
    num = 555;
}
