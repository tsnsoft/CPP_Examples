#include <stdio.h>
#include <stdlib.h>

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

int main() {
    EX1();
    EX2();
    EX3();
}