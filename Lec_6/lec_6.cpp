#include <stdio.h>
#include <cstring>

struct men {
    char fio[20], adress[20];
    int year;
};

struct men a;

void EX1() {
    scanf("%s", a.fio);
    scanf("%s", a.adress);
    a.year = 2003;
    printf("ФИО: %s\n", a.fio);
    printf("Адрес: %s\n", a.adress);
    printf("Год рождения: %d\n", a.year);
}

/* Объявление записи типа computer, состоящей из трех элементов */
struct computer {
    char model [30];
    char cpu [30];
    int hdd;
    int ram;
};

/* Объявление и инициализация переменной рс типа computer */
struct computer pc1 = {"Lenovo G70-70", "Core i3 4030U", 1000, 8};

void EX2() {
    /* Вывод на экран значений элементов структуры */
    printf("Персональная ЭВМ: %s\n", pc1.model);
    printf("Процессор - %s Gb\n", pc1.cpu);
    printf("Емкость HDD - %d Gb\n", pc1.hdd);
    printf("ОЗУ - %d Gb\n", pc1.ram);
}

struct date {
    int day;
    int month;
    int year;
};

struct person {
    char fam[20], im[20], ot[20];
    struct date f;
};

void EX3() {
    struct person ind;
    printf("Укажите фамилию, имя, отчество: \n");
    scanf("%s %s %s", &ind.fam, &ind.im, &ind.ot);
    printf("Укажите день, месяц и год рождения гражданина: \n");
    scanf("%d %d %d", &ind.f.day, &ind.f.month, &ind.f.year);
    printf("Фамилия, имя, отчество: %s %s %s \n", ind.fam, ind.im, ind.ot);
    printf("День рождения - %d -й \n", ind.f.day);
    printf("Месяц рождения- %d-й \n", ind.f.month);
    printf("Год рождения - %d \n", ind.f.year);
}

struct student {
    char name[25];
    int rost;
};

struct student group[20];

void EX4() {
    int n, i;
    printf("Введите количество студентов в группе: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Введите имя и рост студента %d: \n", i + 1);
        scanf("%s", &group[i].name);
        scanf("%d", &group[i].rost);
    };

    printf("Список студентов выше 170 см: ");
    for (i = 0; i < n; i++) {
        // if ((group[i].rost > 170) && ((strcmp(group[i].name, "tsn")) == 0)) {
        if (group[i].rost > 170) {
            printf("%s\n", group[i].name);
        }
    }
}

int main() {
    EX1();
    EX2();
    EX3();
    EX4();
}