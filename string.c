//
// Created by javahongxi on 2020/12/12.
//

#include <stdio.h>
#include <ctype.h>
#include "io_utils.h"

int main() {
    char string[] = "Hello World";

    for (int i = 0; i < 11; ++i) {
        PRINT_CHAR(string[i]);
    }
    // NULL \0
    PRINTLNF("%s", string);

    char string_zh[] = "你好，中国";

    wchar_t ws[] = L"你好，中国";
    return 0;
}
