//
//  main.c
//  结构体数组
//
//  Created by 木溪鱼 on 2020/10/16.
//  Copyright © 2020 Shannon MYang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 要求定义变量保存公司中所有部门的绩效
    struct Department {
        char *name;
        int count;
        double kpi;
    };
    
    struct Department iOS = {"iOS", 20, 99.0};
    struct Department Android = {"Android", 22, 98.0};
    struct Department PHP = {"PHP", 80, 86.0};
    
    // 元素类型 数组名称[元素个数]
    struct Department departs[3] = {
        {"iOS", 20, 99.0},
        {"Android", 22, 98.0},
        {"PHP", 80, 86.0}
    };
    
//    departs[0] == iOS;
    departs[0].name = "iOSv587";
    departs[0].count = 55;
    departs[0].kpi = 100.0;
    printf("name = %s, count = %i, kpi = %lf\n", departs[0].name, departs[0].count, departs[0].kpi);
    return 0;
}
