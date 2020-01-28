#include <stdio.h> 

struct computer {
  int em; 
  int oz;
  char model [20];
};	

/* Объявление записи типа computer, состоящей из трех элементов: mem, sp, model */	
struct computer pc = { 10, 200, "Pentium I"};	

/* Объявление и инициализация переменной рс типа computer */
int EX2() { 
  /* Вывод на экран значений элементов структуры */
  printf ("Персональная ЭВМ %s\n", pc.model);
  printf ("Емкость - %d Gb\n", pc.em);
  printf ("ОЗУ - %d Mb\n", pc.oz);
}
