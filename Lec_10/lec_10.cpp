#include <iostream>
#include <string>

using namespace std;

struct DateStruct {
    int day;
    int month;
    int year;
};

void print(DateStruct &date) {
    cout << date.day << "/" << date.month << "/" << date.year;
}

void EX1() {
    DateStruct today{ 12, 11, 2018}; // используем uniform инициализацию
    today.day = 18; // используем оператор выбора члена для выбора члена структуры
    print(today); // 18/11/2018
}

class DateClass1 {
public:
    int m_day;
    int m_month;
    int m_year;

    void print() {
        cout << m_day << "/" << m_month << "/" << m_year;
    }
};

void EX2() {
    DateClass1 today{ 12, 11, 2018};
    // используем оператор выбора членов для выбора переменной-члена объекта today класса DateClass
    today.m_day = 18;
    // используем оператор выбора членов для вызова метода объекта today класса DateClass
    today.print();
}

class Employee {
public:
    string m_name;
    int m_id;
    double m_wage;

    // Метод вывода информации о работнике на экран
    void print() {
        cout << "Name: " << m_name <<
                "\nId: " << m_id <<
                "\nWage: $" << m_wage << '\n';
    }
};

void EX3() {
    // Объявляем двух работников
    Employee john{ "John", 5, 30.00};
    Employee max{ "Max", 6, 32.75};

    // Выводим информацию о работниках на экран
    john.print();
    cout << endl;
    max.print();
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
        cout << m_day << "/" << m_month << "/" << m_year;
    }
};

void EX4() {
    DateClass2 date;
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
        cout << m_day << "/" << m_month << "/" << m_year;
    }

    // Обратите внимание на этот дополнительный метод
    void copyFrom(const DateClass3 &b) {
        // Мы имеем прямой доступ к закрытым членам объекта b
        m_day = b.m_day;
        m_month = b.m_month;
        m_year = b.m_year;
    }
};

void EX5() {
    DateClass3 date;
    date.setDate(12, 11, 2018); // ок, так как setDate() имеет спецификатор доступа public

    DateClass3 copy;
    copy.copyFrom(date); // ок, так как copyFrom() имеет спецификатор доступа public
    copy.print();
}

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:

    Fraction() // конструктор по умолчанию 
    {
        m_numerator = 0;
        m_denominator = 1;
    }

    int getNumerator() {
        return m_numerator;
    }

    int getDenominator() {
        return m_denominator;
    }

    double getValue() {
        return static_cast<double> (m_numerator) / m_denominator;
    }
};

void EX6() {
    Fraction drob; // так как нет никаких аргументов, то вызывается конструктор по умолчанию Fraction()
    cout << drob.getNumerator() << "/" << drob.getDenominator() << '\n';
}

void EX7() {
    // Класс Person
    class Person {
    public:

        Person(std::string n, int a) { // Конструктор класса
            name = n; age = a;
        }

        void display() { // Метод
            std::cout << "Name: " << name << "\tAge: " << age << std::endl;
        }
    protected:
        std::string name; // Защищенное от доступа извне поле name
    private:
        int age; // Скрытое поле age
    };

    // Класс Employee наследник класса Person
    class Employee : public Person {
    public:
        // Конструктор класса Employee с автовызовом родительского конструктора подкласса Person
        Employee(std::string n, int a, std::string c) : Person(n, a) {
            company = c;
        }

        void showEmployeeName() { // Публичный метод
            std::cout << "Employee Name: " << name << std::endl;
        }
    private:
        std::string company; // Внутреннее скрытое поле company
    };

    Person tom("Tom", 23);
    // tom.name = "Tommy";  //ошибка
    Employee bob("Bob", 31, "Microsoft");
    //bob.name = "Bob Tompson"; // ошибка
    bob.showEmployeeName();
    bob.display();
}

int main() {
    EX1();
    EX2();
    EX3();
    EX4();
    EX5();
    EX6();
    EX7();
}

