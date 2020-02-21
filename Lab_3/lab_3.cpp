#include <stdio.h>
#include <math.h>

void EX1() {
    int a, b;
    puts("Введите значения а и b");
    scanf("%d %d", &a, &b);

    if (a > b) puts("a больше b");
    else puts("a меньше или равно b");

    if (a == b) puts("a равно b");
}

void EX2() {
    int i;

    printf("Введите целое число:\n");
    scanf("%d", &i);

    if ((i > 31) && (i < 256)) {
        printf("Такой символ существует");
    } else {
        printf("Taкoгo символа нет");
    }
}

void EX3() {
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

void EX4() {
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

void EX5() {
    char y;
    scanf("%c", &y);

    switch (y) {
        case '1':
            printf("Ветвь 1\n");
            break;
        case '2':
        case '3':
            printf("Ветвь 2 или 3\n");
            break;
        default:
            printf("Bетви 1, 2, 3 не работают\n");
    }
}

void EX6() {
    int i, j = 1, k;

    for (i = 1; i <= 3; i++) {
        printf("Acтана \t");
    }

    printf("\nУкажите число повторений цикла\n");
    scanf("%d", &k);

    for (i = 1; i <= k; i++) {
        printf("%d", j);
    }

    j = i;
    printf("\n");

    for (i = 1; i <= k; i++) {
        printf("%d ", j *= i);
    }
}

void EX7() {
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

void EX8() {
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

void EX9() {
    float x, y, z, h;
    int i, n;

    printf("Введитe исходные данные h, n \n");
    scanf("%f %n", &h, &n);

    x = 0;
    z = 0;

    for (i = 1; i <= n; i++) {
        y = sin(x) / sqrt(1 + x);
        z = z + y;
        x = x + h;
    }

    printf("x = %7.3f z = %7.3f", x, z);
}

void EX10() {
    float x, s, p;
    int k, n;

    printf("Введите исходные данные х, n \n");
    scanf("%f %d", &x, &n);

    p = 1;
    s = 0;

    for (k = 1; k <= n; k++) {
        p = p*x;
        s = s + ((p + k) / pow(k, 2));
    }

    printf("s = %7.3f", s);
}

void EX11() {
    int i, s;
    i = 1;
    while (scanf("%d", &s)) {
        printf("Введенное число %d с номером %d \n", s, i);
        i++;
    };
}

void EX12() {
    int i, s;
    i = 1;
    s = -1;
    do {
        printf("Введенное число %d с номером %d \n", s, i);
        i++;
    } while (scanf("%d", &s));
}

void EX13() {
    float x, y, a, b, h;
    int k, n;

    printf("Введите исходные данные a, b, h, n \n");
    scanf("%f %f %f %d", &a, &b, &h, &n);

    x = a;

    while (x <= b) {
        y = 0;

        for (k = 1; k <= n; k++) {
            y = y + (x + k) * k;
        }

        printf("x = %5.2f у = %5.2f \n", x, y);
        x = x + h;
    }
}

int main() {
    EX1();
    EX2();
    EX3();
    EX4();
    EX5();
    EX6();
    EX7();
    EX8();
    EX9();
    EX10();
    EX11();
    EX12();
    EX13();
}