#include<iostream> // подключение библиотеки iostream для использования функций ввода/вывода
#include "lec_5_myfunctions.h" // подключение файла с прототипами функций

int funsumBefore(int n, int x) { // определение функции
    int i, s; // локальные целые переменные
    s = 0; // инициализация переменной
    for (i = 0; i <= n; i++) // цикл
        s += (i + x); // накопление суммы
    return (s); // возврат значения
}

void EX1() {
    int y, a = 2; // локальные целые переменные
    y = funsumBefore(5, a); // обращение к функции
    printf("%d", y); // вывод результата
}

void EX2() {
    int y, a = 2; // локальные целые переменные
    int funsumAfter(int, int); //прототип   
    y = funsumAfter(5, a); // обращение к функции
    printf("%d", y); // вывод результата
}

int funsumAfter(int n, int x) { // определение функции
    int i, s; // локальные переменные
    s = 0; // инициализация переменной
    for (i = 0; i <= n; i++) // цикл
        s += (i + x); // накопление суммы
    return (s); // возврат значения
}

void EX3() {
    int y, a = 2; // локальные целые переменные
    y = lec_5_my_funct_1(5, a); // обращение к функции
    printf("%d", y); // вывод результата
}

void EX4() {
    int arr[5] = {1, 2, 3, 4, 5}; // массив целых чисел
    int s; // локальная целая переменная
    s = lec_5_my_funct_2(arr, 5); // обращение к функции
    printf("%d", s); // вывод результата
}

int main() {
    setlocale(LC_ALL, "Russian"); // установка русской локализации
    EX1(); std::cout << std::endl << std::endl;
    EX2(); std::cout << std::endl << std::endl;
    EX3(); std::cout << std::endl << std::endl;
    EX4();
}