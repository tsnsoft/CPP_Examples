#include <stdio.h> 

int EX1_2() {
    int y, a = 2;
    int funsumAfter(int, int); //прототип   
    y = funsumAfter(5, a); // обращение к функции

    printf("%d", y);
}

int funsumAfter(int n, int x) {
    int i, s; // локальные переменные
    s = 0;
    for (i = 0; i <= n; i++)
        s += (i + x);

    return (s);
}
