#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "");
char nome[100];
float salmin, vendas, total;

printf("Informe o nome do vendedor: ");
gets(nome);
printf("Informe o sal�rio m�nimo: ");
scanf("%f", &salmin);
printf("Informe o valor total das vendas efetuadas no m�s: ");
scanf("%f", &vendas);
total = salmin + (vendas * 0.15);
printf("O vendedor(a) %s recebeu no final  do m�s = %.2f \n ", nome, total);

}
