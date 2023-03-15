#include <stdio.h>

void main()
{

    int contador, pares;

    contador = 0;

    while (contador <= 5 )
    {
        pares = contador * 2;
        printf("%d \n", pares);

        contador = contador +1;
    }
    {
        printf("\nTerminou a contagem!");
    }
}
