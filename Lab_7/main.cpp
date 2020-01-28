#include<stdio.h>

#define TWO 2
#define PX printf("1)x равен %d \n", x);
#define FNT "2)x равен %d \n";

int main() {
  int x = TWO;
  PX;

  char a[20] = FNT;
  printf(a, x);
}
