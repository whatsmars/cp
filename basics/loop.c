//
// Created by javahongxi on 2020/12/9.
//

#include <stdio.h>

#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'

int main() {
    int left, right;
    char operator;
    char command;
    do {
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

        puts("Again? Type 'q' for quit: "); // println
        getchar(); // scanf 先把上面的 %d 读掉
        command = getchar();
    } while (command != 'q');

    int sum = 0;
    for (int i = 0; i < 100; ++i) {
        sum += i;
        if (sum > 20) break;
    }
    printf("sum: %d\n", sum);

    for (int i = 0; i < 10; ++i) {
        if (i % 2 != 0) continue;
        printf("i: %d\n", i);
    }
    return 0;
}
