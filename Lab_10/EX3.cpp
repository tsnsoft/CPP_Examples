#include <iostream>
#include <string>

class Employee {
public:
    std::string m_name;
    int m_id;
    double m_wage;

    // Метод вывода информации о работнике на экран
    void print() {
        std::cout << "Name: " << m_name <<
                "\nId: " << m_id <<
                "\nWage: $" << m_wage << '\n';
    }
};

int EX3() {
    // Объявляем двух работников
    Employee john{ "John", 5, 30.00};
    Employee max{ "Max", 6, 32.75};

    // Выводим информацию о работниках на экран
    john.print();
    std::cout << std::endl;
    max.print();

    return 0;
}
