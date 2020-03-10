#include<stdio.h>
#include <iostream>

#define TWO 2
#define PX printf("1)x равен %d \n", x)
#define FNT "2)x равен %d \n"

int main() {
    // ПРИМЕР 1
    int x = TWO;
    PX;
    char a[20] = FNT;
    printf(a, x);

    // ПРИМЕР 2
#define VER_PRO 1
#define PRO "Спасибо за использование версии PRO !"
#define DEMO "Ознакомительная версия"

    // Проверка наличия определения VER_PRO
#ifndef VER_PRO
#define VER_PRO 0
#endif

    // Проверка значения определения VER_PRO
#if VER_PRO == 1
    std::string s = PRO;
#else
    std::string s = DEMO;
#endif

    std::cout << s;
}
