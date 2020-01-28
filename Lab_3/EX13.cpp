#include <math.h> 
#include <stdio.h> 

int EX13() {
  float x, y, a, b, h;
  int k, n;
  
  printf("Введите исходные данные a, b, h, n \n");
  scanf("%f %f %f %d", &a, &b, &h, &n);

  x = a;

  while (x <= b) {
    y = 0;
  
    for (k = 1; k <= n; k++) {
      y = y + (x + k) * k; 
    }
  
    printf("x = %5.2f у = %5.2f \n", x, y);
    x = x + h;
  }
}
