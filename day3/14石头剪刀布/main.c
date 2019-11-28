//
//  main.c
//  14石头剪刀布
//
//  Created by Shannon MYang on 2019/11/26.
//  Copyright © 2019 Shannon MYang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    /*
     有两个角色:玩家（我），电脑
     两个角色都可以出 0 == 石头 / 1 == 剪子 / 2 == 布
     由于我们不知道玩家和电脑到底出什么的拳，所以我们用0，1，2来代替石头/剪刀/布
     玩家的出拳可以让用户自己输入
     电脑的出拳必须产生一个随机数，如何产生随机数？
     将玩家的出拳和电脑的出拳进行比较，得到比赛结果
     
     石头 > 剪刀 / 剪刀 > 布 / 布 > 石头
     */
    
    // 1. 产生电脑的出拳
    // arm4random_uniform方法会根据传入的整数产生一个随机数
    // 生产的值就是0～(N - 1)的值
    int cmp = arc4random_uniform(3);
//    printf("cmp = %i \n", cmp);
    // 2. 接收玩家的出拳
    // 2.1 定义变量保存玩家的出拳
    int player = -1;
    // 2.2 利用scanf函数接收
    printf("请输入出拳，0代表石头，1代表剪刀，2代表布 \n");
    scanf("%i", &player);
    // 3. 比较玩家和电脑的出拳
    if (((0 == player)&&(1 == cmp)) || ((1 == player)&&(2 == cmp)) || ((2 == player)&&(0 == cmp))) {
        printf("玩家获胜！\n");
    }
    else if (((1 == player)&&(0 == cmp)) || ((2 == player)&&(1 == cmp)) || ((0 == player)&&(2 == cmp))) {
        printf("电脑获胜！\n");
    }
    else {
        printf("以和为贵！ \n");
    }
    return 0;
}
