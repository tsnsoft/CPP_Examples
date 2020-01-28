#include <stdio.h>

int EX6() {
  int i, j=1, k; 
  
  for(i = 1; i <= 3; i++) {
    printf("Acтана \t");
  }

  printf("\nУкажите число повторений цикла\n");
  scanf("%d",&k);

  for(i = 1; i <= k; i++) {
    printf("%d",j);
  }

  j=i;
  printf("\n");
  
  for (i = 1; i <= k; i++) {
    printf("%d ", j *= i);	
  }
}
