#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    setlocale(LC_ALL,"");
    printf("Hello world- em português alô mundo \n");
    system("pause");
}
