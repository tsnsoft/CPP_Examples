#define _CRT_SECURE_NO_WARNINGS // отключение предупреждений о небезопасности

#include <stdio.h> // подключение библиотеки ввода-вывода
#include <cmath> // подключение математической библиотеки
#include <iostream> // для cout, cin, endl

void EX1() {
    int c; // объявление переменной
    if ((c = 5 + 3) > 0) {
        printf("Число c больше нуля!");
    } else {
        printf("Число c меньше нуля!");
    }
}

void EX2() {
    float a, b, h, s; // объявление переменных
    printf("Введите значения a, b, h через пробел\n"); // вывод сообщения
    scanf("\n%f %f %f", &a, &b, &h); // ввод значений
    s = (a + b) * h / 2; // вычисление площади трапеции
    printf("Площадь трапеции = %f", s); // вывод значения площади
}

void EX3() {
    float a, b, x, y, z; // объявление переменных
    printf("Введите исходные данные a, b, x через пробел\n"); // вывод сообщения
    scanf("%f%f %f", &a, &b, &x); // ввод значений
    y = pow(x, 3) + log(pow(x, 2) + 1.2) + sqrt(abs(x - 3.6)); // вычисление значения y
    z = exp(a * y) - sin(b * y - 2.37); // вычисление значения z
    printf("x = %7.3f y=%7.3f z=%7.3f", x, y, z); // вывод значений
}

void EX4() {
    float x, y, a; // объявление переменных
    printf("Введите исходное значение X \n"); // вывод сообщения
    scanf("%f", &x); // ввод значения
    a = x + 0.25; // вычисление значения a
    y = a + sin(exp(a)) + sqrt(a / 2.5); // вычисление значения y
    printf("x = %f y = %-f", x, y); // вывод значений
}

int main() {
    setlocale(LC_ALL, "Russian"); // подключение русского языка
    EX1(); std::cout << std::endl << std::endl;
    EX2(); std::cout << std::endl << std::endl;
    EX3(); std::cout << std::endl << std::endl;
    EX4();
}
