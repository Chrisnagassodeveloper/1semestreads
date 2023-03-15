#include <stdio.h>

void main()
{

    int contador,soma;

    contador = 20;
    soma = "";
    printf("Digite o numero inicial da contagem: %d \n", contador);
    printf("Digite o numero final da contagem:  %d \n", soma);
   do
    {
        printf("%d \n", contador);
        contador = contador +1;
    }

         while (contador <=25 );
        printf("Terminou a contagem!");

}
