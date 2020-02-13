#include <stdio.h>
#include <string.h>

int EX7() {
    char s1[] = "1234567890";
    char s2[] = "123458";
    int n;
    n = strspn(s1, s2);
    printf("%d", n);
}
