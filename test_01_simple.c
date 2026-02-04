// test_01_simple.c
// 2変数、10行程度 - 単純なループ（1-10の和）
#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("1～10の和 = %d\n", sum);
    return 0;
}
