#include <stdio.h> 
#include <math.h> 

void EX1() {
    int C;
    if ((C = 5 + 3) > 0) {
        printf("Число C больше нуля!");
    }
}

void EX2() {
    float a, b, h, s;
    printf("Введите значения - a, b, h \n");
    scanf("\n%f %f %f", &a, &b, &h);
    s = (a + b) * h / 2;
    printf("Площадь трапеции");
    printf("\ns = %f", s);
}

void EX3() {
    float a, b, x, y, z;
    printf("введите исходные данные a, b, x\n");
    scanf("%f%f %f", &a, &b, &x);
    y = pow(x, 3) + log(pow(x, 2) + 1.2) + sqrt(abs(x - 3.6));
    z = exp(a * y) - sin(b * y - 2.37);
    printf("x = %7.3f y=%7.3f z=%7.3f", x, y, z);
}

void EX4() {
    float x, y, a;
    printf("Введите исходное значение X \n");
    scanf("%f", &x);
    a = x + 0.25;
    y = a + sin(exp(a)) + sqrt(a / 2.5);
    printf("x = %f y = %-f", x, y);
}

int main() {
    EX1();
    EX2();
    EX3();
    EX4();
}
