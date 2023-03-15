#include <stdio.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL, "");
float cm, distancia, litros;

printf("Informe a distância percorrida (em Km): ");
scanf("%f", &distancia);
printf("Informe a quantidade de litros gastos (em litro): ");
scanf("%f", &litros);
cm = distancia / litros;
printf("O consumo médio do veículo = %.2f Km/1 \n", cm);

}
