#include <stdio.h>

int add(int numerOne, int numerTwo)
{
    return numerOne + numerTwo;
}

int subtract(int numerOne, int numerTwo)
{
    return numerOne - numerTwo;
}

int multiply(int numerOne, int numerTwo)
{
    return numerOne * numerTwo;
}

int divide(int numerOne, int numerTwo)
{
    return numerOne / numerTwo;
}

int main(int argc, char *argv[])
{
    printf("cantidad de parametros: %d\n", argc);

    int i = 0;
    for (i = 1; argv[i - 1] != '\0'; i++)
    {
        printf("parametro numero: %d - %s\n", i, argv[i - 1]);
    }

    int (*arrCalculatorFunctions[])(int, int) = {add, subtract, multiply, divide};

    printf("%d", arrCalculatorFunctions[0](4, 4));

    return 0;
}