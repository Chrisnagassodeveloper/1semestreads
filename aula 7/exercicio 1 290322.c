#include <stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL,"");
    float valor, quantidade, parcela;

    printf("Qual � o valor do produto: ");
    scanf("%f", &valor);
    printf("Quantas parcelas deseja pagar: ");
    scanf("%f", &quantidade);
    parcela = valor / quantidade;
    printf("O valor de cada parcela  ser� % .1f \n",parcela);

}
