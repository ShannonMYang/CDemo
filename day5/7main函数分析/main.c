//
//  main.c
//  7main函数分析
//
//  Created by Shannon MYang on 2019/12/3.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

// main是函数的名称，是系统规定的名称，系统启动程序就会调用名称叫main的函数；
// main函数只能由系统调用，不能手动调用；

// 其实系统在启动程序的时候，会给我们的程序传递一些参数；
// argc : 就是系统传递进来的参数个数，默认是1；
// argv : 就是系统传递进来的参数的实际值，默认是程序的名称；
int main(int argc, const char * argv[]) {
    
    printf("argc = %i \n", argc);
    printf("argv = %s \n", argv[0]);
    
    // return 结束函数
    // 0;返回给操作系统，如果返回0，代表程序正常结束，如果返回其他值代表程序异常结束；
    return 0;
}

