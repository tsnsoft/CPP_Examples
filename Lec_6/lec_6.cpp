#define _CRT_SECURE_NO_WARNINGS // отключение предупреждений о небезопасности

#include <iostream> // подключение библиотеки для работы с потоками ввода-вывода
#include <string.h> // подключение библиотеки для работы со строками

using namespace std; // использование пространства имен std

// Структура "мужчина"
struct men { // объявление структуры
    string fio; // ФИО
    char adress[20]; // адрес
    int year; // год рождения
};

void EX1() {
    struct men bob; // объявление переменной структурного типа
    cout << "Введите ФИО и адрес" << endl; // ввод ФИО, адреса и года рождения
    cin >> bob.fio; // ввод ФИО
    scanf("%s", bob.adress); // ввод адреса
    bob.year = 2003; // ввод года рождения
    cout << "ФИО:" << bob.fio << endl; // вывод ФИО
    printf("Адрес: %s\n", bob.adress); // вывод адреса
    printf("Год рождения: %d\n", bob.year); // вывод года рождения
}

/* Объявление записи типа computer */
struct computer { // объявление структуры
    char model[30]; // модель
    char cpu[30]; // процессор
    int hdd; // емкость HDD
    int ram; // ОЗУ
};

void EX2() {
    struct computer pc1 = {"Lenovo G70-70", "Core i3 4030U", 1000, 8}; // объявление переменной структурного типа
    printf("Персональная ЭВМ: %s\n", pc1.model); // вывод модели
    printf("Процессор - %s Gb\n", pc1.cpu); // вывод процессора
    printf("Емкость HDD - %d Gb\n", pc1.hdd); // вывод емкости HDD
    printf("ОЗУ - %d Gb\n", pc1.ram); // вывод ОЗУ
}

// Структура "дата"
struct date { // объявление структуры
    int day; // день
    int month; // месяц
    int year; // год
};

// Структура "человек"
struct person {
    char fam[20], im[20], ot[20]; // фамилия, имя, отчество
    struct date f; // дата рождения
};

void EX3() {
    struct person anna; // объявление переменной структурного типа
    printf("Укажите фамилию, имя, отчество: \n"); // ввод ФИО
    scanf("%s %s %s", &anna.fam, &anna.im, &anna.ot); // ввод ФИО
    printf("Укажите день, месяц и год рождения гражданина: \n"); // ввод даты рождения
    scanf("%d %d %d", &anna.f.day, &anna.f.month, &anna.f.year); // ввод даты рождения
    printf("Фамилия, имя, отчество: %s %s %s \n", anna.fam, anna.im, anna.ot); // вывод ФИО
    printf("День рождения - %d -й \n", anna.f.day); // вывод даты рождения
    printf("Месяц рождения- %d-й \n", anna.f.month); // вывод месяца даты рождения
    printf("Год рождения - %d \n", anna.f.year); // вывод года даты рождения
}

// Структура "студент"
struct student { // объявление структуры
    char name[25]; // имя
    int height; // рост
};

// Массив из структур "студент"
struct student group[20]; // объявление массива структурного типа

void EX4() {
    int n, i; // объявление переменных целого типа 
    printf("Введите количество студентов в группе: "); // ввод количества студентов
    scanf("%d", &n); // ввод количества студентов

    for (i = 0; i < n; i++) { // цикл для ввода данных о студентах
        printf("Введите имя и рост студента %d: \n", i + 1); // ввод данных о студентах
        scanf("%s", &group[i].name); // ввод данных о студентах
        scanf("%d", &group[i].height); // ввод данных о студентах
    }; // конец цикла для ввода данных о студентах

    printf("Список студентов выше 170 см: \n"); // вывод списка студентов выше 170 см
    for (i = 0; i < n; i++) { // цикл для вывода списка студентов выше 170 см
        // if ((group[i].height > 170) && ((strcmp(group[i].name, "tsn")) == 0)) {
        if (group[i].height > 170) { // условие для вывода списка студентов выше 170 см
            printf("%s\n", group[i].name); // вывод списка студентов выше 170 см
        } // конец условия для вывода списка студентов выше 170 см
    }
}

// Структура "собака"

struct dog { // объявление структуры
    char name[20]; // кличка
    int old; // возраст
};

// Структура "собаковод"

struct dog_breeder { // объявление структуры
    struct men id_men; // идентификатор мужчины
    struct dog id_dog; // идентификатор собаки
    int num_dog; // номер собаки
};

void EX5() {
    struct dog_breeder dbr; // объявление переменной структурного типа
    dbr.id_men.fio = "Bob Tassen"; // ввод ФИО
    strcpy(dbr.id_men.adress, "ALX"); // ввод адреса
    strcpy(dbr.id_dog.name, "Rex"); // ввод клички
    dbr.num_dog = 5; // ввод номера собаки
    cout << dbr.id_men.fio << endl; // вывод ФИО
    cout << dbr.id_men.adress << endl; // вывод адреса
    cout << dbr.id_dog.name << endl; // вывод клички
    cout << dbr.num_dog << endl; // вывод номера собаки

    struct men jacob; // объявление переменной структурного типа
    jacob.fio = "Jacob"; // ввод ФИО
    strcpy(jacob.adress, "WST"); // ввод адреса
    cout << jacob.fio << endl; // вывод ФИО
    cout << jacob.adress << endl; // вывод адреса
}

int main() {
    setlocale(LC_ALL, "Russian"); // установка русской локализации
    EX1(); std::cout << std::endl << std::endl;
    EX2(); std::cout << std::endl << std::endl;
    EX3(); std::cout << std::endl << std::endl;
    EX4(); std::cout << std::endl << std::endl;
    EX5();
}