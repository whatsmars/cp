//
// Created by javahongxi on 2020/12/6.
//

#include <stdio.h>
#include <limits.h>

int main() {
    short s = 0;
    int i = 100;
    long l = 0;
    long long ll = 0;
    unsigned int ui = 0;

    // d: decimal 十进制
    // x: hex 十六进制
    // o: oct 八进制
    printf("i: %d\n", i);
    printf("s: %hd\n", s);
    printf("int in hex: %x\n", i);
    printf("int in oct: %o\n", i);

    size_t size_of_int = sizeof(int);
    // u: unsigned
    printf("short: %lu\n", sizeof(short));
    printf("int: %lu\n", size_of_int);
    printf("long: %lu\n", sizeof(long));
    printf("long long: %lu\n", sizeof(long long));

    printf("max int %d, min int %d\n", SHRT_MAX, SHRT_MIN);
    printf("max int %d, min int %d\n", INT_MAX, INT_MIN);
    printf("max int %ld, min int %ld\n", LONG_MAX, LONG_MIN);
    printf("unsigned max int %u, min int %d", UINT_MAX, 0);
    return 0;
}