#include <stdio.h> 

int EX2() {
    int i;

    printf("Введите целое число:\n");
    scanf("%d", &i);

    if ((i > 31) && (i < 256)) {
        printf("Такой символ существует");
    } else {
        printf("Taкoгo символа нет");
    }
}
