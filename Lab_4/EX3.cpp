#include <stdio.h> 

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;
const unsigned int DIM3 = 2;

int ary[DIM1][DIM2][DIM3];

int EX3() {
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
