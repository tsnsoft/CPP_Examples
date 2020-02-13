#include <stdio.h> 

struct date {
    int day;
    int month;
    int year;
};

struct person {
    char fam[20], im[20], ot[20];
    struct date f;
};

int EX3() {
    struct person ind;
    printf("Укажите фамилию, имя, отчество: \n");
    scanf("%s %s %s", &ind.fam, &ind.im, &ind.ot);
    printf("Укажите день, месяц и год рождения гражданина: \n");
    scanf("%d %d %d", &ind.f.day, &ind.f.month, &ind.f.year);
    printf("Фамилия, имя, отчество: %s %s %s \n", ind.fam, ind.im, ind.ot);
    printf("День рождения - %d -й \n", ind.f.day);
    printf("Месяц рождения- %d-й \n", ind.f.month);
    printf("Год рождения - %d \n", ind.f.year);
}
