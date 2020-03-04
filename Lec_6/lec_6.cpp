#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;

// Структура "мужчина"
struct men {
    string fio;
    char adress[20];
    int year;
};

void EX1() {
    struct men bob;
    cin >> bob.fio;
    scanf("%s", bob.adress);
    bob.year = 2003;
    cout << "ФИО:" << bob.fio << endl;
    printf("Адрес: %s\n", bob.adress);
    printf("Год рождения: %d\n", bob.year);
}

/* Объявление записи типа computer */
struct computer {
    char model [30];
    char cpu [30];
    int hdd;
    int ram;
};

void EX2() {
    struct computer pc1 = {"Lenovo G70-70", "Core i3 4030U", 1000, 8};
    printf("Персональная ЭВМ: %s\n", pc1.model);
    printf("Процессор - %s Gb\n", pc1.cpu);
    printf("Емкость HDD - %d Gb\n", pc1.hdd);
    printf("ОЗУ - %d Gb\n", pc1.ram);
}

// Структура "дата"
struct date {
    int day;
    int month;
    int year;
};

// Структура "человек"
struct person {
    char fam[20], im[20], ot[20];
    struct date f;
};
    
void EX3() {
    struct person anna;
    printf("Укажите фамилию, имя, отчество: \n");
    scanf("%s %s %s", &anna.fam, &anna.im, &anna.ot);
    printf("Укажите день, месяц и год рождения гражданина: \n");
    scanf("%d %d %d", &anna.f.day, &anna.f.month, &anna.f.year);
    printf("Фамилия, имя, отчество: %s %s %s \n", anna.fam, anna.im, anna.ot);
    printf("День рождения - %d -й \n", anna.f.day);
    printf("Месяц рождения- %d-й \n", anna.f.month);
    printf("Год рождения - %d \n", anna.f.year);
}

// Структура "студент"
struct student {
    char name[25];
    int rost;
};

// Массив из структур "студент"
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

    printf("Список студентов выше 170 см: \n");
    for (i = 0; i < n; i++) {
        // if ((group[i].rost > 170) && ((strcmp(group[i].name, "tsn")) == 0)) {
        if (group[i].rost > 170) {
            printf("%s\n", group[i].name);
        }
    }
}

// Структура "собака"
struct dog {
    char name[20];
    int old;
};

// Структура "собаковод"
struct dog_breeder {
    struct men id_men;
    struct dog id_dog;
    int num_dog;
};

void EX5() {
    struct dog_breeder dbr;
    dbr.id_men.fio = "Bob Tassen";
    strcpy(dbr.id_men.adress, "ALX");
    strcpy(dbr.id_dog.name, "Rex");
    dbr.num_dog = 5;
    cout << dbr.id_men.fio << endl;
    cout << dbr.id_men.adress << endl;
    cout << dbr.id_dog.name << endl;
    cout << dbr.num_dog << endl;

    struct men jacob;
    jacob.fio = "Jacob";
    strcpy(jacob.adress, "WST");
    cout << jacob.fio << endl;
    cout << jacob.adress << endl;
}

int main() {
    EX1();
    EX2();
    EX3();
    EX4();
    EX5();
}