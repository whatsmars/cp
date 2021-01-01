//
// Created by javahongxi on 2020/12/9.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int magic_number = rand();
    while (1) {
        int n;
        puts("Please input a number: ");
        scanf("%d", &n);
        if (n > magic_number) {
            puts("Your number is bigger!");
        } else if (n < magic_number) {
            puts("Your number is smaller!");
        } else {
            puts("Yes! You got it!");
            break;
        }
    }
    return 0;
}
