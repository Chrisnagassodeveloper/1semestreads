#include <stdio.h>
void main()
{
    int inicial, fim;
char opcao;
opcao = 's';
while(opcao =='s' || opcao =='S')
{
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

            printf("\nTecle[s] para continuar ou[n] para terminar: ");
            scanf(" %c", &opcao);
            printf("\n");

    {
        printf("\nTerminou a contagem!\n");
}
}
    }

