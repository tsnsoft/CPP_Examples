#include <stdio.h> 

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;

int arr[DIM1][DIM2];

int EX2() {

    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            arr[i][j] = (i + 1) * 10 + (j + 1);

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
