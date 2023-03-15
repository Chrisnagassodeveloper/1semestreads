
#include <stdio.h>

void main()

{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    switch (idade >= 18)
{

    case 1:

            printf("Voce possui %d anos e maior de iade \n", idade);
    break;

    case 0:

        printf("Voce possui %d anos e menor de idade \n", idade);
    break;
}

}
