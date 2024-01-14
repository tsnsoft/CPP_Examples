#include <stdio.h> // printf

int main() {
    int x, y; // x and y целые числа
    x = 5; 
    y = 60;
    x++; // x = x + 1
    ++y; // y = y + 1
    printf("x = %d y = %d \n", x, y); // %d - целое число
    printf("x = %d y = %d \n", x++, ++y); // %d - целое число
}
