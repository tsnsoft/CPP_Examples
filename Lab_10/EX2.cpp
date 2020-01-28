#include <iostream>
 
class DateClass {
    public:
        int m_day;
        int m_month;
        int m_year;
     
        void print() {
            std::cout << m_day << "/" << m_month << "/" << m_year;
        }
};
 
int EX2() {
    DateClass today { 12, 11, 2018 };
    // используем оператор выбора членов для выбора переменной-члена объекта today класса DateClass
    today.m_day = 18; 

    // используем оператор выбора членов для вызова метода объекта today класса DateClass
    today.print();

    return 0;
}
