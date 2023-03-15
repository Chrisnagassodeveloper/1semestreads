#include <stdio.h>

void main()
{

    int idade, habilitacao;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
          printf("Possui habilitacao? \n 0 - nao possui \n 1 - possui \n");
          printf("Informe a sua situacao (0 ou 1): ");
          scanf("%d", &habilitacao);
          if (idade >= 18 && habilitacao == 1)
{
    printf("Voce pode dirigir o veiculo \n");
    }
    else
    {
        printf("Voce nao pode dirigir o veiculo \n");
    }
}

