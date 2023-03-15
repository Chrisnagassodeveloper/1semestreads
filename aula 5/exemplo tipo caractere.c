#include <stdio.h>
#include <stdlib.h>

void main(){

char nome[50];
char sexo;

printf("Digite o seu nome: ");
gets(nome);
printf("Digite o seu sexo: ");
scanf("%c", &sexo);
printf("\nO nome digitado foi %s e sexo %c \n", nome, sexo);
system("pause");
}
