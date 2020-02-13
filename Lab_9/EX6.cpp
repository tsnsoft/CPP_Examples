#include <stdio.h>
#include <string.h>

int EX6() {
    char s1[] = "LOLOKEKE";
    char s2[] = "KE";
    int n;
    n = strcspn(s1, s2);
    printf("%d", n); // 4
}
