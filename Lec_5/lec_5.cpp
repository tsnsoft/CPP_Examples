#include <stdio.h> 
#include "lec_5_myfunctions.h"

int funsumBefore(int n, int x) {
    int i, s;
    s = 0;
    for (i = 0; i <= n; i++)
        s += (i + x);
    return (s);
}

void EX1() {
    int y, a = 2;
    y = funsumBefore(5, a);
    printf("%d", y);
}

void EX2() {
    int y, a = 2;
    int funsumAfter(int, int); //прототип   
    y = funsumAfter(5, a); // обращение к функции
    printf("%d", y);
}

int funsumAfter(int n, int x) {
    int i, s; // локальные переменные
    s = 0;
    for (i = 0; i <= n; i++)
        s += (i + x);
    return (s);
}

void EX3() {
    int y, a = 2;
    y = lec_5_my_funct_1(5, a);
    printf("%d", y);
}

void EX4() {
    int arr[5] = {1, 2, 3, 4, 5};
    int s;
    s = lec_5_my_funct_2(arr, 5);
    printf("%d", s);
}

int main() {
    EX1();
    EX2();
    EX3();
    EX4();
}