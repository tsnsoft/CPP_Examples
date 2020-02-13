#include <stdio.h>

int EX1() {
    int a, b;
    puts("Введите значения а и b");
    scanf("%d %d", &a, &b);

    if (a > b) puts("a больше b");
    else puts("a меньше или равно b");

    if (a == b) puts("a равно b");
}
