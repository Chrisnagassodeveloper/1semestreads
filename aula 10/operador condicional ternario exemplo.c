#include <stdio.h>

void main(){
float salario, resultado;

printf("Digite o salario: ");
scanf("%f", &salario);
resultado = salario >= 1000 ? salario + (salario * .10) : salario + (salario *0.05);
printf("O novo salario = %.2f \n", resultado);
}
