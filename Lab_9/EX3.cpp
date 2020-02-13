#include <stdio.h>
#include <string.h>

int EX3() {
    static char s1[] = "СТРОКА";
    const char *s2 = "_символов";
    strcat(s1, s2);
    puts(s1); // СТРОКАсимволов
}
