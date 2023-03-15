#include <stdio.h>

void main()
{

    int contador, num1;
    contador = 1;

   do

    {
        num1 = contador * 2;

        printf("O dobro do numero %d = %d \n",contador,num1);

        contador = contador +1;
    }
     while (contador < 11);
}
