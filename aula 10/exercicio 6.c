#include <stdio.h>

void main(){

char opcao;
printf("Estado civil \n s - solteiro \n c - casado \n d - divorciado \n v - viuvo \n");
printf("Escolha uma opcao (s,c,d ou v): ");
scanf("%c", &opcao);
if(opcao == 'S' || opcao == 's')
{
    printf("Sua escolha e solteiro");
}
    else if(opcao == 'C' || opcao =='c')
    {
        printf("Sua escolha e casado");
    }
    else if(opcao == 'D' || opcao == 'd')
    {
        printf("sua escolha e divorciado");
    }
    else if(opcao == 'V' || opcao =='v')
    {
        printf("Sua escolha e viuvo");
    }
    else
    {
            printf("Opcao invalida");
    }
}



