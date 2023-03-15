#include <stdio.h>

void main()
{
    float num1, num2, soma;
    char opcao;
    opcao = 's';
    while (opcao == 's' || opcao == 'S')
    {
        printf("Digite um numero: ");
        scanf("%f", &num1);
        printf("Digite outro numero: ");
        scanf("%f", &num2);
        soma = num1 + num2;
        printf("A soma de %.1f + %.1f = %.1f \n\n", num1, num2,soma);
        printf("Deseja continuar o calculo da soma de outros numeros? \n");
        printf("Tecle [S] para continuar ou [N] para terminar: ");
        scanf("%c", &opcao);
        printf("\n");

    }
    printf("O programa terminou \n");
}
