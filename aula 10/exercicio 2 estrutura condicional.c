#include <stdio.h>
#include <locale.h>

void main (){


int cadeira, r1;
printf("Informe o numero de cadeiras que ira comprar: ");
scanf("%d", &cadeira);

r1 = cadeira<= 50 ?(cadeira * 45): (cadeira * 40);

printf("O total a pagar: %d \n", r1);


}
