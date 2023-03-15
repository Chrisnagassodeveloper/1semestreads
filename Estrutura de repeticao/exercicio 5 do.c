#include <stdio.h>

void main()
{

    int contador, impares;

    contador = 0;

   do
    {
        impares = contador + contador + 1;
        printf("%d \n", impares);

        contador = contador +1;
    }

         while (contador < 5 );
      {

        printf("\nTerminou a contagem!");
    }
}
