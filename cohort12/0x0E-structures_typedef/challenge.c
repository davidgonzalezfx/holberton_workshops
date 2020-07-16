#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct person
{
    char name[30];
    char lastName[30];
    char city[30];
    int age;
    char idType[3];
    char id[30];
} student;

char *arrIdTypes[] = {"CC", "CE"};

int checkNumbers(char *s)
{
    while (*s)
    {
        if (*s >= '0' && *s <= '9')
            return 1;
        s++;
    }
    return 0;
}

int checkLowerCase(char *s)
{
    while (*s)
    {
        if (*s < 'A' || *s > 'Z')
            return (1);
        s++;
    }
    return (0);
}

int checkWords(char *s)
{
    while (*s)
    {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            return (1);
        s++;
    }
    return (0);
}

int validate_strings(char fullname[30])
{
    if (fullname == NULL || fullname == "")
        return (1);
    if (checkNumbers(fullname) == 1)
        return (1);
    return (0);
}

int validate_age(int age)
{
    if (age == 000)
        return (1);
    if (age <= 0)
        return (1);
    return (0);
}

int validate_idType(char idType[3])
{
    if (idType == NULL)
        return (1);
    if (checkNumbers(idType) == 1)
        return (1);
    if (checkLowerCase(idType) == 1)
        return (1);
    return (0);
}

int validate_id(char idType[3], char *id)
{
    if (id == NULL)
        return (1);
    if (checkWords(id) == 1)
    {
        if (idType[0] == 'P' && idType[1] == 'A' || idType[0] == 'C' && idType[1] == 'E')
        {
            return (0);
        }
        else
        {
            return (1);
        }
    }

    return (0);
}
int main()
{
    student *arrStudents;
    char teamName[30];
    int i, numStudents;

    printf("Enter the team name:\n");
    scanf("%s", teamName);
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    arrStudents = malloc(numStudents * sizeof(student));

    for (i = 0; i < numStudents; ++i)
    {
        printf("Enter first name: ");
        scanf("%s", (arrStudents + i)->name);
        while (validate_strings((arrStudents + i)->name) == 1)
        {
            printf("Please type a valid name: ");
            scanf("%s", (arrStudents + i)->name);
        }

        printf("Enter last name: ");
        scanf("%s", (arrStudents + i)->lastName);
        while (validate_strings((arrStudents + i)->lastName) == 1)
        {
            printf("Please type a valid last name: ");
            scanf("%s", (arrStudents + i)->lastName);
        }

        printf("Enter the city: ");
        scanf("%s", (arrStudents + i)->city);
        while (validate_strings((arrStudents + i)->city) == 1)
        {
            printf("Please type a valid city: ");
            scanf("%s", (arrStudents + i)->city);
        }

        printf("Enter the age: ");
        scanf("%d", &(arrStudents + i)->age);
        while (validate_age((arrStudents + i)->age) == 1)
        {
            printf("Please type a valid age: ");
            scanf("%i", &(arrStudents + i)->age);
        }

        printf("Enter the idType: ");
        scanf("%s", (arrStudents + i)->idType);
        while (validate_idType((arrStudents + i)->idType) == 1)
        {
            printf("Ooops! Something went grong\n");
            printf("Please type a valid idType: ");
            scanf("%s", (arrStudents + i)->idType);
        }

        printf("Enter ID: ");
        scanf("%s", (arrStudents + i)->id);
        while (validate_id((arrStudents + i)->idType, (arrStudents + i)->id) == 1)
        {
            printf("Ooops! Something went grong\n");
            printf("Please type a valid id: ");
            scanf("%s", (arrStudents + i)->id);
        }
        printf("-------\n");
    }

    printf("\n");
    printf("Nombre del equipo: %s\n", teamName);
    printf("Número de participantes: %d\n", numStudents);

    for (i = 0; i < numStudents; ++i)
    {
        printf("\tName: %s\n", (arrStudents + i)->name);
        printf("\tLast Name: %s\n", (arrStudents + i)->lastName);
        printf("\tCity: %s\n", (arrStudents + i)->city);
        printf("\tAge: %d\n", (arrStudents + i)->age);
        printf("\tID Type: %s\n", (arrStudents + i)->idType);
        printf("\tID: %s\n", (arrStudents + i)->id);
        printf("\t----------\n");
    }

    free(arrStudents);

    return 0;
}
