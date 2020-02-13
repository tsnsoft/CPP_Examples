#include <stdio.h>

int EX2() {
    float a, b, h, s;
    printf("Введите значения - a, b, h \n");
    scanf("\n%f %f %f", &a, &b, &h);
    s = (a + b) * h / 2;
    printf("Площадь трапеции");
    printf("\ns = %f", s);
}
