//
// Created by javahongxi on 2020/12/9.
//

#include "stdio.h"

// 函数定义在调用者之后，需在前面声明
void println(void);
int getMoney(int);

void localStaticVar() {
    static int static_var;
    auto int non_static_var = 0;
    printf("static var: %d\n", static_var++);
    printf("non static var: %d\n", non_static_var++);
}

int main() {
    int money = getMoney(2);
    printf("money: %d", money);
    println();

    localStaticVar();
    localStaticVar();
    localStaticVar();
    return 0;
}

void println(void) {
    printf("\n");
}

int getMoney(int level) {
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
