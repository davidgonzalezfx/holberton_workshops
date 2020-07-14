#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    char name[30];
    char city[30];
    int age;
    char idType[2];
    char id[30];
} student;

int main()
{
    char *arrTiposDeID[2] = {"TI", "CC", "CE", "PA"};
    char arrTiposDeID1[4][2] = {"TI", "CC", "CE", "PA"};
    char **arrTiposDeID2 = {"TI", "CC", "CE", "PA"};

    student *arr;
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(student));

    for (i = 0; i < n; ++i)
    {
        printf("Enter first name, city and age of student:\n");
        scanf("%s %s %d", (arr + i)->name, (arr + i)->city, &(arr + i)->age);
    }

    printf("\n\nDisplaying Information:\n");

    for (i = 0; i < n; ++i)
    {
        printf("Name: %s\tCity: %s\tAge: %d\n", (arr + i)->name, (arr + i)->city, (arr + i)->age);
    }

    return 0;
}
