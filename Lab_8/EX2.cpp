#include <stdio.h>

int EX2() {
  FILE *fp;
  char name[] = "my.txt";

  if ((fp = fopen(name, "r")) == NULL)
  {
    printf("Не удалось открыть файл");

    return 0;
  }

  // открыть файл удалось
  // требуемые действия над данными

  fclose(fp);
  return 0;
}
