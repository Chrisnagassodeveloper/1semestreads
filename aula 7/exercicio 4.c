#include <stdio.h>
#include <locale.h>

void main()
{
setlocale(LC_ALL, "");
float cm, distancia, litros;

printf("Informe a dist�ncia percorrida (em Km): ");
scanf("%f", &distancia);
printf("Informe a quantidade de litros gastos (em litro): ");
scanf("%f", &litros);
cm = distancia / litros;
printf("O consumo m�dio do ve�culo = %.2f Km/1 \n", cm);

}
