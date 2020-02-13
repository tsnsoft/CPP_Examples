#include <stdio.h>
#include <string.h>

int EX4() {
    char s1[] = "CTPOKA";
    char *ptr, c = 'P';
    ptr = strchr(s1, c);
    if (ptr)
        printf("%lu", ptr - s1); // Результат 2
    else
        printf("НЕТ символа");
}
