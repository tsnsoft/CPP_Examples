#include <stdio.h> 
#include <math.h> 

int EX3() {
  float a, b, x, y, z;
  printf("введите исходные данные a, b, x\n");
  scanf("%f%f %f", &a, &b, &x);
  y = pow(x, 3) + log(pow(x, 2) + 1.2) + sqrt(abs(x - 3.6));
  z = exp(a * y) - sin(b * y - 2.37);
  printf("x = %7.3f y=%7.3f z=%7.3f",x,y,z);
}
