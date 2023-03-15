#include <stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float valor, quantidade, parcela;

    printf("Qual é o valor do produto: ");
    scanf("%f", &valor);
    printf("Quantas parcelas deseja pagar: ");
    scanf("%f", &quantidade);
    parcela = valor / quantidade;
    printf("O valor de cada parcela  será % .1f \n",parcela);

}
