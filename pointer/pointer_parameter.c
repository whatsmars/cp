//
// Created by javahongxi on 2020/12/13.
//

#include <stdio.h>
#include <io_utils.h>

int SumIntArray(int array[], int length) {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += array[i];
    }
    return sum;
}

void SumIntArray2(int array[], int length, int *sum) {
    *sum = 0;
    for (int i = 0; i < length; ++i) {
        *sum += array[i];
    }
}

int main() {
    int array[] = {0, 1, 2, 3, 4};
    int sum = SumIntArray(array, 5);
    int sum2;
    SumIntArray2(array, 5, &sum2);

    PRINT_INT(sum);
    PRINT_INT(sum2);

    return 0;
}
