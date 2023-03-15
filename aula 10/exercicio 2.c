#include <stdio.h>
#include <locale.h>

void main(){


int n1, cadeiras, resultado;
printf("Informe o numero de cadeiras que ira comprar: ");
scanf("%d", &n1);
resultado = cadeiras <= 50 ? cadeiras + (cadeiras * 45) : cadeiras + (cadeiras * 40);
printf("O total a pagar:  %d \n", resultado);
}
