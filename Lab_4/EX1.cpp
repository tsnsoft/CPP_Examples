#include<stdio.h>

int EX1() {
    float a[100], s, p;
    int k, n;

    printf("Введите исходное данное n: \n");
    scanf("%d", &n);

    for (k = 0; k < n; k++) {
        scanf("%f", &a[k]);
    }

    s = 0;
    p = 1;

    for (k = 0; k < n; k++) {
        if (a[k] >= 0) s = s + a[k];
        else p = p * a[k];
    }

    printf("S=%f P=%f", s, p);
}
