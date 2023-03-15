#include <stdio.h>

void main()
{

    int contador,soma;
    contador = 1;
    soma = 0;
    while (contador < 11)

    {
        soma = soma+ contador;


        contador = contador +1;
    }
     printf("O resultado da soma de 1 a 10 = %d \n", soma);
}
