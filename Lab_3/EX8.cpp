#include<stdio.h> 
#include<math.h> 

int EX8() {
    float x, y, a, h;
    int i;

    printf("Введите исходные данные a, h \n");
    scanf("%f %f", &a, &h);
    x = a;

    for (i = 1; i <= 5; i++) {
        y = atan(pow(x, 2));
        printf("x = %7.3f у = %7.3f \n", x, y);
        x = x + h;
    }
}
