#include <stdio.h> 

struct gruppa {
  char name[20]; 
  int rost;
};

struct gruppa zap[20];

int EX4() {
  int n, i;
  printf("Введите количество студентов в группе: "); 
  scanf("%d",&n);	

  for (i = 0; i <= n; i++) {
    printf("Введите имя и рост студента: \n");
    scanf("%s", &zap[i].name); 
    scanf("%d", &zap[i].rost);
  }; 
  
  printf("Список студентов выше 170 см: "); 
  for(i = 0;i <= n; i++) {
    if (zap[i].rost > 170) printf("%s\n",zap[i].name);
  }
}
