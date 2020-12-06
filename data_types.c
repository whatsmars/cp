//
// Created by javahongxi on 2020/12/6.
//

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

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
    printf("unsigned max int %u, min int %d\n", UINT_MAX, 0);

    // 字符集 ASCII
    char a = 'a'; // 97
    char char_1 = '1'; // 49

    printf("char 'a': %d\n", a);
    printf("char '1': %d\n", char_1);

    printf("char 'a': %c\n", a);
    printf("char '1': %c\n", char_1);

    char c = 0; // \0, NULL
    printf("char 0: %d\n", c);

    // \r: return
    // \n: newline
    // \b: backspace
    // \t: table
    // \': '
    // \": "
    char char_1_escape_oct = '\61'; // 49的八进制是61
    char char_1_escape_hex = '\x31'; // 49的十六进制是31
    printf("char '\\61': %c\n", char_1_escape_oct);
    printf("char '\\x31': %c\n", char_1_escape_hex);

    // Unicode
    wchar_t zh = L'中';
    wchar_t zh_hex = L'\u4E2D';
    printf("中: %d\n", zh);
    printf("中: %d\n", zh_hex);

    return 0;
}