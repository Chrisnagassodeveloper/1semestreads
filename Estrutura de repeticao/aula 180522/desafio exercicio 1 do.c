#include <stdio.h>

void main()
{

    int contador;
    contador = 10;
    do
    {

        printf("O dobro do numero %d = %d \n", contador, contador * 2);
        contador --;
    }
    while (contador >=1);
}
