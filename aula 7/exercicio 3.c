#include <stdio.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");
float peso, altura, imc;

printf("Digite o seu peso em kg (exemplo: 67,5): ");
scanf("%f", &peso);
printf("Digite a sua altura em metros (Exemplo: 1,50):");
scanf("%f", &altura);
imc = peso / (altura * altura);
printf("O seu IMC = %.2f \n", imc);

}
