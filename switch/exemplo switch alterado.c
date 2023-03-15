#include <stdio.h>
void main()
{

    char estadoCivil;
    printf("Digite [c] para casado(a) \n");
    printf("Digite [s] para solteiro(a) \n");
    printf("Digite [d] para divorciado(a) \n");
    printf("Digite [v] para viuvo(a) \n");
    printf("Qual e o seu estado civil: \n");
    scanf("%c", &estadoCivil);
    switch (estadoCivil)
    {
    case 'C':
    case'c':
            printf("\n O estado civilselecionado e casado(a) \n");
        break;
    case 'S':
    case's':
        printf("\n O estado civil selecionado e solteiro \n");
        break;
    case'D':
        case'd':
                printf("\n O estdo civl selecionado e divorciado(a) \n");
        break;
    case 'V':
    case'v':
        printf("\n O estado civil selecionado e viuvo(a) \n ");
        break;
        default:
        printf("\n Opcao invalida \n");


    }

}
