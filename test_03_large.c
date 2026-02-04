// test_03_large.c
// 12変数以上、50行程度 - 複数の関数を持つプログラム
#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result;
}

int subtract(int a, int b) {
    int result = a - b;
    return result;
}

int multiply(int a, int b) {
    int result = a * b;
    return result;
}

int divide(int a, int b) {
    int result = 0;
    if (b != 0) {
        result = a / b;
    }
    return result;
}

int calculate_average(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    int avg = total / size;
    return avg;
}

int main(void) {
    int x = 20;
    int y = 5;

    int sum_result = add(x, y);
    int diff_result = subtract(x, y);
    int prod_result = multiply(x, y);
    int div_result = divide(x, y);

    int values[5] = {10, 20, 30, 40, 50};
    int average = calculate_average(values, 5);

    int final_total = sum_result + diff_result + prod_result + div_result;

    printf("加算: %d\n", sum_result);
    printf("減算: %d\n", diff_result);
    printf("乗算: %d\n", prod_result);
    printf("除算: %d\n", div_result);
    printf("配列平均: %d\n", average);
    printf("総計: %d\n", final_total);

    return 0;
}
