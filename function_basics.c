//
// Created by javahongxi on 2020/12/9.
//

#include "stdio.h"

int GetMoney(int level) {
    switch (level) {
        case 1:
            return 1000;
        case 2:
            return 500;
        case 3:
            return 300;
        default:
            return 0;
    }
}

int main() {
    int money = GetMoney(2);
    printf("money: %d\n", money);
    return 0;
}
