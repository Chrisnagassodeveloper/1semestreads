#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "");
    char nome[50];
    float n1, n2, n3, n4, media;

    printf("Digite o nome completo do aluno: ");
    gets (nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota : ");
    scanf("%f", &n3);
    printf("Digite a quarta nota : ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("O aluno %s obteve a média = %.2f \n",nome, media);
    system("pause");
}


