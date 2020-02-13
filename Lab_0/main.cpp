#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int number1;
    float number2;

    /* Стиль С из  <stdio.h> */
    printf("Введите целое и вещественное число через пробел: ");
    scanf("\n%d %f", &number1, &number2);
    printf("number1 = %d, number2 = %f \n", number1, number2);
    puts("Спасибо!");
        
    /* Стиль С++ из  <iostream> */
    cout << "Введите еще число: ";
    cin >> number1;
    cout << "Вы ввели число " << number1 << endl;

    /* Создание задержки на экране. Стиль С++ из  <iostream> */
    cout << "\nНажмите Enter для завершения программы...\n";
    // Очистим ввод с клавиатуры и будем ожидать нажатие клавиши "Enter" 
    cin.ignore(); cin.get();

    return 0;
}
