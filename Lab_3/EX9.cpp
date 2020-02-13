#include<stdio.h> 
#include<math.h>

int EX9() {
    float x, y, z, h;
    int i, n;

    printf("Введитe исходные данные h, n \n");
    scanf("%f %n", &h, &n);

    x = 0;
    z = 0;

    for (i = 1; i <= n; i++) {
        y = sin(x) / sqrt(1 + x);
        z = z + y;
        x = x + h;
    }

    printf("x = %7.3f z = %7.3f", x, z);
}
