#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
void main()
{
    setlocale(LC_ALL,"");
    bool v,f;
    v = true;
    f = false;
    printf("O melhor time do Brasil é o Corinthians? %d \n",v);
    printf("Hoje vai chover? %d \n",f);
}
