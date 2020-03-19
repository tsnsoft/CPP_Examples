#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void EX1() {
    char str[50];
    FILE *FL;

    FL = fopen("FAL.F", "w");
    puts("Введите строку (до 49 символов)");
    scanf("%s", str);
    /* Функция fputs записывает в файл строку str*/
    fputs(str, FL);

    /* Текст в функции fprintf будет выведен на экран*/
    fprintf(stderr, "Демонстрация вывода в стандартный файл для ошибок\n");
    fclose(FL);

    /* Файл открывается для чтения */
    FL = fopen("FAL.F", "r");

    /* Функция fgets считывает из файла FAL.F строку str, максимальная длина которой 20-1=19 ( 20- второй параметр fgets); получившаяся строка оканчивается символом '\0' */
    fgets(str, 20, FL);

    printf("str = %s", str);
    fclose(FL);
}

void EX2() {
    FILE *fp;
    char name[] = "my.txt";

    if ((fp = fopen(name, "r")) == NULL) {
        printf("Не удалось открыть файл");
        return;
    }

    // открыть файл удалось
    printf("Файл найден!");
    // требуемые действия над данными
    fclose(fp);
    return;
}

void EX3() {
    FILE *S1, *S2;
    int x, y;

    printf("Введите число: ");
    scanf("%d", &x);

    S1 = fopen("S1.txt", "w");
    fprintf(S1, "%d", x);
    fclose(S1);

    S1 = fopen("S1.txt", "r");
    S2 = fopen("S2.txt", "w");
    fscanf(S1, "%d", &y);

    y += 3;

    fclose(S1);

    fprintf(S2, "%d\n", y);

    fclose(S2);
}

void EX4() {

    struct costume {
        char firm[30];
        int size;
        int cons;
        int price;
    };

    char firm[30];
    int size;
    int cons;
    int price;

    const int n = 3;

    costume mas[n];


    // Запись данных в файл
    ofstream f_out("costume.txt");
    for (int i = 0; i < n; i++) {//в цикле заполняем файл 
        cout << i + 1 << " фирма: ";
        cin >> firm;
        f_out << firm << endl;
        cout << "Размер:";
        cin >> size;
        f_out << size << endl;
        cout << "Расход: ";
        cin >> cons;
        f_out << cons << endl;
        cout << "Цена: ";
        cin >> price;
        f_out << price << endl;
        cout << "\n";
    }
    f_out.close();

    // Чтение данных из файла
    ifstream f_in("costume.txt");
    for (int i = 0; i < n; i++) {//в цикле заполняем файл 
        f_in >> mas[i].firm;
        f_in >> mas[i].size;
        f_in >> mas[i].cons;
        f_in >> mas[i].price;
    }
    f_in.close();

    // Поиск фирмы с заданным названием
    cout << "\nВведите фирму: ";
    char a[100];
    scanf("%s", &a);
    for (int i = 0; i < n; i++) {
        if (strcmp(mas[i].firm, a) == 0) {
            cout << "Фирма: " << mas[i].firm << " Размер:"
                    << mas[i].size << " Расход:"
                    << mas[i].cons << " Цена: " << mas[i].price << endl;
        }
    }



}

int main() {
    EX1();
    EX2();
    EX3();
    EX4();
}