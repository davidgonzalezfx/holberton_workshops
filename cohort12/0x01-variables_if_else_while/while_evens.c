#include <stdio.h>

/* Dado un numero de filas en excel, determinar cuáles son pares con el fin de poder hacer un diseño de tablas alternado y entonces
visualizar de manera más sencilla la información */
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