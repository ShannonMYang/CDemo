//
//  main.c
//  结构体在内存中的存储细节
//
//  Created by 木溪鱼 on 2020/9/28.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 数组内存布局：寻址，从大到小；赋值，从小到大。
    /*
     1. 内存寻址从大到小
     2. 存储数组元素从小到大
     3. 数组的地址就是数组首元素的地址
     */
    int nums = {1, 2, 3};
    
    // 注意：定义结构体类型并不会分配存储空间
    struct Person0 {
        int age;  // 4
        int height;  // 4
        int width;  // 4
    };
    // 只有定义结构体变量才会真正的分配存储空间
    struct Person0 p0;
    // 从当前来看，结构体变量所占用的存储空间就是它所有属性所占用的存储空间的总和
    printf("size = %lu\n", sizeof(p0));  // 12
    
    printf("&age = %p\n", &p0.age);
    printf("&height = %p\n", &p0.height);
    printf("&width = %p\n", &p0.width);
    
    // 结构体名称并不是结构体的地址
//    printf("p0 = %p\n", p0);
    // 结构体的地址就是它第0个属性的地址
    printf("&p0 = %p\n", &p0);
    
    /*
     -------------------------------分割线---------------------------------
     */
    printf("-------------------------------分割线---------------------------------\n");
    
    /*
     结构体是如何分配存储空间的
     结构体会首先找到所有属性中占用内存空间最大的那个属性，然后按照该属性的倍数，分配内存空间
     1. 找到结构体类型中占用存储空间最大的属性，以后就按照该属性，以后就按照该属性占用的存储空间来分配（在当前这种情况下，每次分配8个字节）
     2. 会从第0个属性开始分配存储，如果存储空间不够就会重新分配，如果分配存储空间还有剩余，那么就会把后面的属性的数据存储到剩余的存储空间中
     */
    struct Person1 {
        double height;  // 8
        int age;  // 4
        char c;  // 1
    };
    struct Person1 p1;
    printf("size = %lu\n", sizeof(p1));  // 16
    
    // 3. 会从第0个属性开始分配存储，如果存储空间不够就会重新分配，并且会将当前属性的值直接存储到新分配的存储空间中，以前剩余的存储空间就不要了
    struct Person2 {
        int age;  // 4
        double height;  // 8
        char c;  // 1
    };
    struct Person2 p2;
    printf("size = %lu\n", sizeof(p2));  // 24
    // 注意：为什么要按照所有属性中占用存储空间最大的属性的字节来分配存储空间呢？
    // 主要是为了提高计算机的运算速度
    return 0;
}
