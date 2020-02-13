#include<stdio.h> 

int EX11() {
    int i, s;
    i = 1;
    while (scanf("%d", &s)) {
        printf("Введенное число %d с номером %d \n", s, i);
        i++;
    };
}
