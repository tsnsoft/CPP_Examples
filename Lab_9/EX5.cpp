#include <stdio.h>
#include <string.h>

int EX5() {
  char s1[]="CTPOKA";
  const char *ptr, *s2 = "P0K"; //регистры играют роль
  ptr = strpbrk(s1, s2);
  
  if (ptr)	
    printf("%lu", ptr-s1); // Результат 2
  else
    printf("нет символа");
}
