#include<stdio.h> 

int EX7() {
    int a, b, c, i, n;

    printf("Введите номер числа Фибоначчи ");
    scanf("\n %d", &n);

    a = 1; // a=F(0), а соответствует F(i-2)
    b = 1; // b=F(1), b соответствует F(i-1)

    for (i = 2; i <= n; i++) {
        c = a + b; // с соответствует F(i)
        // в качестве а и b берется следующая пара чисел
        a = b;
        b = c;
    }
    printf("%d-е число Фиббоначчи = %d", n, b);
}
