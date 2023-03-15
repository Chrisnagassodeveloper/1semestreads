#include <stdio.h>

void main()
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
    {

        printf("Voce possui %d anos e maior de idade \n", idade);
    }
    else
    {
        printf("Voce possui %d anos e menor de idade \n", idade);

    }
}
