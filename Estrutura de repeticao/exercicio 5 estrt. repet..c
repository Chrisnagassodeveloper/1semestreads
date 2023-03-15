#include <stdio.h>

void main()
{

    int contador, impares;

    contador = 0;

    while (contador < 5 )
    {
        impares = contador + contador + 1;
        printf("%d \n", impares);

        contador = contador +1;
    }
    {
        printf("\nTerminou a contagem!");
    }
}
