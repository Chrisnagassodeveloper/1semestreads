#include <stdio.h>

void main()
{
    float num1, num2, contador;
    printf("Digite o numero inicial da contagem: ", num1);
    scanf("f", &num1);
    printf("Digite o numero final da contagem: ", num2);
    scanf("%f", &num2);
    contador = num1 - 1;
    while (contador < num2)
    {

        contador = contador +1;
        printf("%.1f \n", contador);

    }
    {

        printf("Terminou a contagem!");
    }

}
