// test_02_medium.c
// 6変数、25行程度 - 配列の最大値・最小値を求めるプログラム
#include <stdio.h>

int main(void) {
    int numbers[10] = {3, 7, 2, 9, 1, 5, 8, 4, 6, 0};
    int max = numbers[0];
    int min = numbers[0];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
        sum += numbers[i];
    }

    int avg = sum / 10;

    printf("最大値: %d\n", max);
    printf("最小値: %d\n", min);
    printf("合計: %d\n", sum);
    printf("平均: %d\n", avg);

    return 0;
}
