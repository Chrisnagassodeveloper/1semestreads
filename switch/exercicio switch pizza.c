#include <stdio.h>

void main()
{
    int sabor,recheio;
    printf("Sabores \n 1 - Pizza queijo \n 2 - Pizza carne \n 3 - Pizza calabreza \n 4 - Pizza frango \n");
    printf("Escolha a pizza digitando o seu  numero: ");
    scanf("%d", &sabor);

    switch (sabor)
    {
    case (1):
        {
            printf("\n Pizza escolhida de queijo \n");
            break;
        }

    case (2):
    {
        printf("\n Pizza escolhida de carne \n");
        break;
    }
    case (3):
    {
        printf("\n Pizza de calabreza \n");
        break;
    }
    case (4):
    {
        printf("\n Pizza de frango \n");
        break;
    }
    }


}

