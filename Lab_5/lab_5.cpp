#include <stdio.h> 
#include "lab_5_myfunctions.h"

int funsumBefore(int n, int x) {
    int i, s;
    s = 0;
    for (i = 0; i <= n; i++)
        s += (i + x);
    return (s);
}

int EX1_1() {
    int y, a = 2;
    y = funsumBefore(5, a);
    printf("%d", y);
}

int EX1_2() {
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

int EX1_3() {
    int y, a = 2;
    y = lab_5_my_funct_1(5, a);
    printf("%d", y);
}

int EX1_4() {
    int arr[5] = {1, 2, 3, 4, 5};
    int s;
    s = lab_5_my_funct_2(arr, 5);
    printf("%d", s);
}

int main() {
    EX1_1();
    EX1_2();
    EX1_3();
    EX1_4();
}