#include <stdio.h>

/* Dado un numero de filas en excel, determinar cuáles son pares con el fin de poder hacer un diseño de tablas alternado y entonces
visualizar de manera más sencilla la información. Para ello, vamos a imprimir las filas pares*/
int main()
{
    // int filas = 20;
    // int iterador = 0;

    // while (iterador <= filas)
    // {
    //     if (iterador % 2 == 0)
    //     {
    //         printf("%d\n", iterador);
    //     }

    //     iterador++;
    // }

    int numeroEstudiantes = 10;
    int estudianteAbuscar = 6;
    int i;

    for (i = 0; i <= numeroEstudiantes; i++)
    {
        if (i == estudianteAbuscar || i == 8)
        {
            continue;
        }

        printf("revisando score del estudiante %d \n", i);
    }

    return 0;
}