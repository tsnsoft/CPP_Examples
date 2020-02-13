#include<stdio.h> 

int EX12() {
    int i, s;
    i = 1; s = -1;
    do {
        printf("Введенное число %d с номером %d \n", s, i);
        i++;
    } while (scanf("%d", &s));
}
