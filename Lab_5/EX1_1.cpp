#include <stdio.h> 

int funsumBefore(int n, int x) {
  int i, s;
  s = 0;	
  for(i = 0;i <= n; i++)
    s += (i + x);	

  return(s);
}

int EX1_1() { 
  int y, a = 2;
  y = funsumBefore(5, a);		
  printf("%d", y);
}
