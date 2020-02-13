#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int number;

    /* Стиль С из  <stdio.h> */
    printf("Введите число: ");
    scanf("\n%d", &number);
    printf("mumber = %d\n", number);
    puts("Спасибо!");
        
    /* Стиль С++ из  <iostream> */
    cout << "Введите еще число: ";
    cin >> number;
    cout << "Вы ввели число " << number << endl;

    /* Создание задержки на экране. Стиль С++ из  <iostream> */
    cout << "\nНажмите Enter для завершения программы...\n";
    cin.ignore(); cin.get();

    return 0;
}
