#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    //1. fullName no puede ser vacío
    //2. fullName no puede contener números
    //3. fullName debe contener únicamente 1 nombre y 1 apellido, por ende, solo debe haber un espacio
    char name[30];

    //1. fullName no puede ser vacío
    //2. fullName no puede contener números
    //3. fullName debe contener únicamente 1 nombre y 1 apellido, por ende, solo debe haber un espacio
    char lastName[30];

    //1. city no puede ser vacío
    //2. city no puede contener números
    char city[30];

    //1. age no puede ser vacío
    //2. age no puede contener letras
    //3. age debe ser mayor a cero
    int age;

    //1. idType no puede ser vacío
    //2. idType no puede contener números
    //3. idType no puede ir en minúsculas
    char idType[3];

    //1. id no puede ser vacío
    //2. id solo puede contener letras si idType es: PA o CE
    char id[30];

} student;

int main()
{
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

    free(arr);

    return 0;
}
