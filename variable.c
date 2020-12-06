//
// Created by javahongxi on 2020/12/6.
//

#include <stdio.h>

// macro
#define COLOR_RED 0xFF0000

int main() {
    int value = 2;
    printf("size of value: %lu\n", sizeof value);
    printf("address of value: %#x\n", &value);

    const int red = 0xFF0000;
    printf("red: %d\n", red);
    int *p_red = &red;
    *p_red = 0;
    printf("red: %d\n", red);

    printf("COLOR_RED: %d\n", COLOR_RED);

    return 0;
}
