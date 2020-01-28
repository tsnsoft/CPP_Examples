#include <stdio.h>

int EX1() {
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
  FL = fopen ("FAL.F", "r");
  
  /* Функция fgets считывает из файла FAL.F строку str, максимальная длина которой 20-1=19 ( 20- второй параметр fgets); получившаяся строка оканчивается символом '\0' */
  fgets(str, 20, FL);
  
  printf("str = %s", str);
  fclose(FL);
}
