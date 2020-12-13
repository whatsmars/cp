//
// Created by javahongxi on 2020/12/12.
//

#include <stdio.h>
#include <io_utils.h>

int main() {
    int a;
    scanf("%d", &a);

    int *p = &a;
    PRINT_HEX(p);
    PRINT_HEX(&a);

    PRINT_INT(sizeof(int *));

    PRINT_INT(*p);
    PRINT_INT(a);

    int **pp = &p;
    // *pp => p;

    *p = 20;
    PRINT_INT(*p);
    PRINT_INT(a);

    int *const cp = &a;
    *cp = 2; // OK
    //cp = &b; ERROR
    int const * cp2 = &a;
    // *cp2 = 2; ERROR
    int b;
    cp2 = &b; // OK

    int const *const ccp = &a;
    // ccp = &b; ERROR
    //*ccp = 2; ERROR
    return 0;
}
