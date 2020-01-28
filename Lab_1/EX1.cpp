#include <stdio.h> 

int main() {
    int x,y;	
    x=5;
    y=60;
    x++;
    ++y;
    
    printf("x = %d y = %d \n", x, y);
    printf("x = %d y = %d \n", x++, ++y);
}
