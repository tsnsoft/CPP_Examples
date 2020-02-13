#include <stdio.h>
#include <cstring>

struct student {
    char name[25];
    int rost;
};

struct student group[20];

int EX4() {
    int n, i;
    printf("Введите количество студентов в группе: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Введите имя и рост студента %d: \n", i + 1);
        scanf("%s", &group[i].name);
        scanf("%d", &group[i].rost);
    };

    printf("Список студентов выше 170 см: ");
    for (i = 0; i < n; i++) {
     // if ((group[i].rost > 170) && ((strcmp(group[i].name, "tsn")) == 0)) {
        if (group[i].rost > 170) {
            printf("%s\n", group[i].name);
        }
    }
}
