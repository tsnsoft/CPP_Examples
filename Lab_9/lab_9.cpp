#include <stdio.h>
#include <string.h>

int EX1() {
    char name[20]; // выделение памяти
    scanf("%s", name); // ввод
    printf("%s", name); // вывод
}

int EX2() {
    char sl[] = "CTPOKA";
    char s2[] = "символов";
    strcpy(s2, sl);
    puts(s2); // СТРОКА
}

int EX3() {
    static char s1[] = "СТРОКА";
    const char *s2 = "_символов";
    strcat(s1, s2);
    puts(s1); // СТРОКАсимволов
}

int EX4() {
    char s1[] = "CTPOKA";
    char *ptr, c = 'P';
    ptr = strchr(s1, c);
    if (ptr)
        printf("%lu", ptr - s1); // Результат 2
    else
        printf("НЕТ символа");
}

int EX5() {
    char s1[] = "CTPOKA";
    const char *ptr, *s2 = "P0K"; //регистры играют роль
    ptr = strpbrk(s1, s2);

    if (ptr)
        printf("%lu", ptr - s1); // Результат 2
    else
        printf("нет символа");
}

int EX6() {
    char s1[] = "LOLOKEKE";
    char s2[] = "KE";
    int n;
    n = strcspn(s1, s2);
    printf("%d", n); // 4
}

int EX7() {
    char s1[] = "1234567890";
    char s2[] = "123458";
    int n;
    n = strspn(s1, s2);
    printf("%d", n);
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