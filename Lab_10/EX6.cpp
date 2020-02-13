#include <iostream>

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

int EX6() {
    Fraction drob; // так как нет никаких аргументов, то вызывается конструктор по умолчанию Fraction()
    std::cout << drob.getNumerator() << "/" << drob.getDenominator() << '\n';

    return 0;
}
