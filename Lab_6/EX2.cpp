#include <stdio.h> 

/* Объявление записи типа computer, состоящей из трех элементов */
struct computer {
    char model [30];
    char cpu [30];
    int hdd;
    int ram;
};

/* Объявление и инициализация переменной рс типа computer */
struct computer pc1 = {"Lenovo G70-70", "Core i3 4030U", 1000, 8};

int EX2() {
    /* Вывод на экран значений элементов структуры */
    printf("Персональная ЭВМ: %s\n", pc1.model);
    printf("Процессор - %s Gb\n", pc1.cpu);
    printf("Емкость HDD - %d Gb\n", pc1.hdd);
    printf("ОЗУ - %d Gb\n", pc1.ram);
}
