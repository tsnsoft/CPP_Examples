#include<stdio.h>
#include<math.h>	

int EX10() {
  float x, s, p;
  int k, n;

  printf("Введите исходные данные х, n \n");
  scanf("%f %d", &x, &n);
  
  p = 1;
  s = 0;

  for(k = 1; k <= n; k++) {
    p = p*x;
    s = s + (p + k) / pow(k, 2);
  }

  printf("s = %7.3f", s);
}
