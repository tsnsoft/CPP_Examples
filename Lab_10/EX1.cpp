#include <iostream>

struct DateStruct {
    int day;
    int month;
    int year;
};

void print(DateStruct &date) {
    std::cout << date.day << "/" << date.month << "/" << date.year;
}

int EX1() {
    DateStruct today{ 12, 11, 2018}; // используем uniform инициализацию
    today.day = 18; // используем оператор выбора члена для выбора члена структуры
    print(today); // 18/11/2018
    return 0;
}
