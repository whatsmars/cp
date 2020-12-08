//
// Created by javahongxi on 2020/12/8.
//

#include <stdio.h>

int main() {
    int a, b;
    a = 1;
    b = 2;
    printf("a = %d, b = %d\n", a, b);
    int c = a + b;
    printf("a + b = %d\n", c);
    c = a - b;
    printf("a - b = %d\n", c);
    c = a * b;
    printf("a * b = %d\n", c);
    c = a / b;
    printf("a / b = %d\n", c);
    c = a % b;
    printf("a %% b = %d\n", c);

    c = a > b;
    printf("a > b = %d\n", c);
    c = a <= b;
    printf("a <= b = %d\n", c);
    c = a == b;
    printf("a == b = %d\n", c);
    c = a != b;
    printf("a != b = %d\n", c);

    int m = 10;
    int n = -10;
    printf("m > 0 && n > 0 : %d\n", m > 0 && n > 0);
    printf("m > 0 || n > 0 : %d\n", m > 0 || n > 0);

    int i = 1;
    int j = i++;
    printf("i = %d, j = %d\n", i, j);
    i = 1;
    j = ++i;
    printf("i = %d, j = %d\n", i, j);
    printf("i = %d, j = %d\n", i--, --j);

    int x = 1, y = 2, z = 4;
    printf("x & y & z : %d\n", x & y & z);
    printf("x | y | z : %d\n", x | y | z);
    printf("1 << 1 : %d\n", 1 << 1);
    printf("2 << 1 : %d\n", 2 << 1);
    printf("1000 * 2 == 1000 << 1 : %d\n", 1000 * 2 == 1000 << 1);
    printf("1000 / 2 == 1000 >> 1 : %d\n", 1000 / 2 == 1000 >> 1);

    int l = 1000;
    printf("l = 1000, l *= 2, l: %d\n", l *= 2);
    l = 1000;
    printf("l = 1000, l >>= 2, l: %d\n", l <<= 1);

    return 0;
}
