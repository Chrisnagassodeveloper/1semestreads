#include <stdio.h>

void main ()
           {
float salario;

int tempo, idade;

printf("Informe o salario: ");
scanf("%f", &salario);
printf("Informe o tempo de servico(anos): ");
scanf("%f", &tempo);
printf("Informe a idade: ");
scanf("%f", &idade);
if (tempo > 3 && idade > 30 && salario < 4000)
    {
printf("Recebera o reajuste \n");
    }
else
{

    printf("Nao recebera reajuste \n");
           }

}

