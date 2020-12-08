//
// Created by javahongxi on 2020/12/8.
//

#include <stdio.h>
#include <stdbool.h>

#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'

int main() {
    bool got = false;
    int n;
    printf("Please input a number: \n");
    scanf("%d", &n);
    if (n > 100) {
        printf("Your number is bigger!\n");
    } else if (n < 100) {
        printf("Your number is smaller!\n");
    } else {
        got = true;
        printf("Yes! You got it!\n");
    }

    printf("got: %d\n", got);
    int val = got ? 2 : 1;
    printf("val : %d\n", val);

    int left, right;
    char operator;
    printf("Please input an expression: \n");
    scanf("%d %c %d", &left, &operator, &right);
    int result;
    switch (operator) {
        case ADD:
            result = left + right;
            break;
        case SUB:
            result = left - right;
            break;
        case MULTIPLY:
            result = left * right;
            break;
        case DIVIDE:
            result = left / right;
            break;
        default:
            printf("Unsupported operator: %c\n", operator);
            return 1;
    }
    printf("result: %d\n", result);

    return 0;
}
