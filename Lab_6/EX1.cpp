#include <stdio.h>

struct men {
  char fio[20], adress[20];
  int year;
};

struct men a;
int EX1() {
  scanf("%s",a.fio);
  scanf("%s",a.adress);	
  a.year=2003;
  printf("ФИО: %s\n", a.fio);
  printf("Адрес: %s\n", a.adress);
  printf("Год рождения: %d\n", a.year);
}
