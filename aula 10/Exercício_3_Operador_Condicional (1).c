#include<stdio.h>
void main()
{
    float valor, total;
    int opcao;

    printf ("Digite o valor do produto:");
    scanf("%f", &valor);
    printf ("Forma de Pagamento: \n 1 - a vista \n 2 - a prazo \n");
    printf ("Escolha o pagamento (1 ou 2:)");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        total = valor - (valor * 0.10);
        printf ("O total a pagar a vista = %.2f \n", total);
    }
    else if (opcao == 2)
    {
        printf ("O total a pagar a prazo = %.2f \n", valor);
    }
    else
    {
        printf ("Forma de pagamento invalida");
    }
    }
