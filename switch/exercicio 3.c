#include <stdio.h>
void main()
{
    float valor,total;
    int opcao;
    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Forma de pagamento \n");
    printf("1 - a vista \n2 - a prazo \n");
    printf("Escolha o pagamento (1 ou 2): ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case (1):
        total = valor - (valor * 0.10);
        printf("O total a pagar a vista = %.2f \n", total);
        break;
    case (2):
        printf("O total a pagar a prazo = %.2f \n", valor);
        break;
    default:
        printf("Forma de pagamento invalida");
    }

}
