#define _CRT_SECURE_NO_WARNINGS // отключение предупреждений о небезопасности

#include <iostream> // подключение библиотеки ввода-вывода
#include <string> // подключение библиотеки строк

using namespace std; // использование пространства имен std

struct DateStruct { // определение структуры DateStruct
    int day; // день
    int month; // месяц
    int year; // год
};

void print(DateStruct& date) { // функция вывода даты
    cout << date.day << "/" << date.month << "/" << date.year << endl; // вывод даты
}

void EX1() {
    DateStruct today{ 12, 11, 2018}; // используем uniform инициализацию
    today.day = 18; // используем оператор выбора члена для выбора члена структуры
    print(today); // 18/11/2018
}

class DateClass1 { // определение класса DateClass1
public: // спецификатор доступа public
    int m_day; // день
    int m_month; // месяц
    int m_year; // год

    void print() { // метод вывода даты
        cout << m_day << "/" << m_month << "/" << m_year << endl;
    }
};

void EX2() {
    DateClass1 today{ 12, 11, 2018}; // используем uniform инициализацию
    // используем оператор выбора членов для выбора переменной-члена объекта today класса DateClass
    today.m_day = 18;
    // используем оператор выбора членов для вызова метода объекта today класса DateClass
    today.print();
}

class Employee { // определение класса Employee
public: // спецификатор доступа public
    string m_name; // имя работника
    int m_id; // идентификатор работника
    double m_wage; // заработная плата работника

    // Метод вывода информации о работнике на экран
    void print() {
        cout << "Name: " << m_name << "\nId: " << m_id << "\nWage: $" << m_wage << '\n';
    }
};

void EX3() {
    // Объявляем двух работников
    Employee john{ "John", 5, 30.00}; // используем uniform инициализацию
    Employee max{ "Max", 6, 32.75}; // используем uniform инициализацию

    // Выводим информацию о работниках на экран
    john.print(); // используем оператор выбора членов для вызова метода объекта john класса Employee
    max.print(); // используем оператор выбора членов для вызова метода объекта max класса Employee
}

class DateClass2 // члены класса являются закрытыми по умолчанию
{
    int m_day; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_month; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_year; // закрыто по умолчанию, доступ имеют только другие члены класса

public:
    // Метод setDate() имеет доступ к закрытым членам класса, так как сам является членом класса
    void setDate(int day, int month, int year) // открыто, доступ имеет любой объект
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void print() // открыто, доступ имеет любой объект
    {
        cout << m_day << "/" << m_month << "/" << m_year << endl;
    }
};

void EX4() {
    DateClass2 date;
    // date.m_day = 12; // Так делать нельзя, поле скрытое
    date.setDate(12, 11, 2018); // ок, так как setDate() имеет спецификатор доступа public
    date.print(); // ок, так как print() имеет спецификатор доступа public
}

class DateClass3 // члены класса являются закрытыми по умолчанию 
{
    int m_day; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_month; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_year; // закрыто по умолчанию, доступ имеют только другие члены класса

public:

    void setDate(int day, int month, int year) {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void print() {
        cout << m_day << "/" << m_month << "/" << m_year << endl;
    }
    // Обратите внимание на этот дополнительный метод
    void copyFrom(const DateClass3& b) {
        // Мы имеем прямой доступ к закрытым членам объекта b
        m_day = b.m_day;
        m_month = b.m_month;
        m_year = b.m_year;
    }
};

void EX5() {
    DateClass3 date; // создаем объект date класса DateClass3
    date.setDate(12, 11, 2018); // ок, так как setDate() имеет спецификатор доступа public

    DateClass3 copy;
    copy.copyFrom(date); // ок, так как copyFrom() имеет спецификатор доступа public
    copy.print(); // ок, так как print() имеет спецификатор доступа public
}

class Fraction { // класс дробь
private: // спецификатор доступа private
    int m_numerator; // числитель
    int m_denominator; // знаменатель

public: // конструктор класса

    Fraction() // конструктор по умолчанию 
    {
        m_numerator = 0; // инициализируем числитель нулем
        m_denominator = 1; // инициализируем знаменатель единицей
    }

    int getNumerator() { // метод получения числителя
        return m_numerator; // возвращаем числитель
    }

    int getDenominator() { // метод получения знаменателя
        return m_denominator; // возвращаем знаменатель
    }

    double getValue() { // метод получения значения дроби
        return static_cast<double> (m_numerator) / m_denominator; // возвращаем значение дроби
    }
};

void EX6() {
    Fraction drob; // так как нет никаких аргументов, то вызывается конструктор по умолчанию Fraction()
    cout << drob.getValue() << '\n';
    cout << drob.getNumerator() << "~/~" << drob.getDenominator() << '\n';
}

void EX7() {
    // Класс Person
    class Person { // Базовый класс
    public: // Открытая секция класса
        Person(std::string n, int a) { // Конструктор класса
            name = n; // Инициализация поля name
            age = a; // Инициализация поля age
        }

        void display() { // Метод
            std::cout << "Name: " << name << "\tAge: " << age << std::endl;
        }
    protected: // Защищенная секция класса
        std::string name; // Защищенное от доступа извне поле name
    private: // Скрытая секция класса
        int age; // Скрытое поле age
    };

    // Класс Employee наследник класса Person
    class Employee : public Person { // Публичное наследование
    public:
        // Конструктор класса Employee с автовызовом родительского конструктора подкласса Person

        Employee(std::string n, int a, std::string c) : Person(n, a) { // Конструктор класса Employee
            company = c;
        }

        void showEmployeeName() { // Публичный метод
            std::cout << "Employee Name: " << name << std::endl;
        }
    private: // Скрытая секция класса
        std::string company; // Внутреннее скрытое поле company
    };

    Person tom("Tom", 23); // Создаем объект класса Person
    // tom.name = "Tommy";  //ошибка
    Employee bob("Bob", 31, "Microsoft"); // Создаем объект класса Employee
    //bob.name = "Bob Tompson"; // ошибка
    bob.showEmployeeName(); // Вызов метода showEmployeeName()
    bob.display(); // Вызов метода display()
}

class MyClassSum { // класс с перезагрузкой метода
public: // спецификатор доступа public
    //пример метода с перезагрузкой
    double sum(double x, double y) {
        double d;
        d = x + y;
        return d;
    }

    //пример метода с перезагрузкой
    int sum(int x, int y) {
        int d;
        d = x + y;
        return d;
    }
};

void EX8() {
    MyClassSum myClass; // создаем объект класса MyClassSum
    cout << myClass.sum(12, 12) << endl; // вызываем метод sum(int x, int y)
    cout << myClass.sum(12.5, 12.5) << endl; // вызываем метод sum(double x, double y)
}

int main() {
    setlocale(LC_ALL, "Russian"); // установка русской локализации
    EX1(); std::cout << std::endl << std::endl;
    EX2(); std::cout << std::endl << std::endl;
    EX3(); std::cout << std::endl << std::endl;
    EX4(); std::cout << std::endl << std::endl;
    EX5(); std::cout << std::endl << std::endl;
    EX6(); std::cout << std::endl << std::endl;
    EX7(); std::cout << std::endl << std::endl;
    EX8();
}
