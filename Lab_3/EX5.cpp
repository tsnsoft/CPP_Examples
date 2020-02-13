#include<stdio.h>

int EX5() {
    char y;
    scanf("%c", &y);

    switch (y) {
        case '1':
            printf("Ветвь 1\n");
            break;
        case '2':
        case '3':
            printf("Ветвь 2 или 3\n");
            break;
        default:
            printf("Bетви 1, 2, 3 не работают\n");
    }
}
