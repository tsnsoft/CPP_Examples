#include <stdio.h> 
#include <math.h>

int EX4() {
    float x, y, b;
    printf("Введите исходные данные х, b \n");
    scanf("%f%f", &x, &b);

    if (x < 10) {
        y = 1 + b * pow(x, 2);
    } else {
        if (x <= 15) {
            y = log(x) + b;
        } else {
            y = sin(b * x);
        }
    }

    printf("y = %7.3f", y);
}
