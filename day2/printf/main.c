//
//  main.c
//  printf
//
//  Created by Shannon MYang on 2019/10/25.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // 1. 指定位宽
    // 如何指定位宽，%mi；其中m就是位宽，而i输出对应类型的数据
    // 默认情况下，位宽是右对齐，如果需要输出的宽度类型不够，会在左边补空格；
    int number = 999;
    printf("%5i!!!\n", number);
    // 如果在位宽前面加上-号，就会改变位宽的对齐方式为左对齐，如果需要输出的类型宽度不够，会在右边补空格。
    printf("%-5i!!!\n", number);
    return 0;
}
