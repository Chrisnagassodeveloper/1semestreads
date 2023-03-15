#include <stdio.h>
void main()
{
    int inicial, fim;
    printf("Digite o numero inicial da contagem: ");
    scanf("%d", &inicial);
    printf("Digite o numero final da contagem: ");
    scanf("%d", &fim);
    if (inicial < fim)
    {
        while(inicial <= fim)
        {
            printf("%d\n", inicial);
            inicial++;
        }
    }
    else if (inicial > fim)
    {
        while( inicial >= fim)
        {

            printf("%d\n", inicial);
            inicial--;
        }
    }
    else
        {
            printf("\nOs numeros sao iguais\n");
        }
    {
        printf("\nTerminou a contagem!\n");
    }
}


