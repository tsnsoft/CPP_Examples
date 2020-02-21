#include<stdio.h>

void EX1() {
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

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;

int arr[DIM1][DIM2];

void EX2() {
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            arr[i][j] = (i + 1) * 10 + (j + 1);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

const unsigned int DIM3 = 2;

int ary[DIM1][DIM2][DIM3];

void EX3() {
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                ary[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
                printf("%d ", ary[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    EX1();
    EX2();
    EX3();
}