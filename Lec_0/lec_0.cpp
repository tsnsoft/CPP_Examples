#define _CRT_SECURE_NO_WARNINGS // отключение предупреждений о небезопасности

#include <iostream> // для cout, cin, endl
#include <stdio.h> // для printf, scanf

using namespace std; // пространство имен std

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian"); // подключение русского языка
    int number1; // целое число
    float number2; // вещественное число

    /* Стиль С из  <stdio.h> */
    printf("Введите целое и вещественное число через пробел: ");
    scanf("\n%d %f", &number1, &number2); // считываем целое и вещественное число
    printf("number1 = %d, number2 = %f \n", number1, number2); // выводим целое и вещественное число
    puts("Спасибо!"); // выводим строку

    /* Стиль С++ из  <iostream> */
    cout << "Введите еще целое число: "; // выводим строку
    cin >> number1; // считываем целое число
    cout << "Вы ввели число " << number1 << endl; // выводим целое число

    /* Создание задержки на экране. Стиль С++ из  <iostream> */
    cout << "\nНажмите Enter для завершения программы...\n";
    // Очистим ввод с клавиатуры и будем ожидать нажатие клавиши "Enter" 
    cin.ignore();
    cin.get(); // cin.ignore() - очистка ввода с клавиатуры, cin.get() - ожидание нажатия клавиши "Enter"

    return 0; // возвращаем 0
}
