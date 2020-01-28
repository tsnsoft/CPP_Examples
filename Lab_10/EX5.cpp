#include <iostream>
 
class DateClass // члены класса являются закрытыми по умолчанию 
{
    int m_day; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_month; // закрыто по умолчанию, доступ имеют только другие члены класса
    int m_year; // закрыто по умолчанию, доступ имеют только другие члены класса
 
public:
    void setDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }
 
    void print()
    {
        std::cout << m_day << "/" << m_month << "/" << m_year;
    }
 
    // Обратите внимание на этот дополнительный метод
    void copyFrom(const DateClass &b)
    {
        // Мы имеем прямой доступ к закрытым членам объекта b
        m_day = b.m_day;
        m_month = b.m_month;
        m_year = b.m_year;
    }
};
 
int EX5()
{
    DateClass date;
    date.setDate(12, 11, 2018); // ок, так как setDate() имеет спецификатор доступа public
    
    DateClass copy;
    copy.copyFrom(date); // ок, так как copyFrom() имеет спецификатор доступа public
    copy.print();
 
    return 0;
}
