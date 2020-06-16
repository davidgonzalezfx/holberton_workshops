#include <stdio.h>

int main()
{
    int filas = 10;

    int fila = 0;

    printf("size of filas = %d\n", sizeof(filas));

    while (fila <= filas)
    {
        if (fila % 2 == 0)
        {
            printf("la fila %d es par\n", fila);
        }

        fila = fila + 1;
    }
}