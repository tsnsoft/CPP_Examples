#include <stdio.h> 
#include <math.h>

int EX4() {
  float x, y, a;
  printf ("Введите исходное значение X \n");
  scanf("%f", &x);
  a = x + 0.25;
  y= a + sin(exp(a)) + sqrt(a / 2.5);
  printf("x = %f y = %-f", x, y);
}
