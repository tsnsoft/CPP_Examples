#include <stdio.h>
#include <math.h>

int EX3() {
    float x, y;
    printf("Введите исходное значение х\n");
    scanf("%f", &x);

    if (x > 0) {
        y = log(x);
    } else {
        y = pow(cos(x), 2);
    }

    printf("y =%7.3f", y);
}
