#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "");
char nome[100];
float salmin, vendas, total;

printf("Informe o nome do vendedor: ");
gets(nome);
printf("Informe o salário mínimo: ");
scanf("%f", &salmin);
printf("Informe o valor total das vendas efetuadas no mês: ");
scanf("%f", &vendas);
total = salmin + (vendas * 0.15);
printf("O vendedor(a) %s recebeu no final  do mês = %.2f \n ", nome, total);

}
