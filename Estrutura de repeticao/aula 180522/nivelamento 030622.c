#include <stdio.h>

int main()
         {


             int num,i,op=0;
             do
             {
                  printf("Digite um numero: ");
                  scanf("%d", &num);
                  i=1;
                  do
                  {
                      printf("%2d * %2d = %3d\n", num, i, num*1);
                      i++<3;
                  }
                  while (i<11);
             printf(" Deseja novamente?");
             scanf("%d", &op);
             }
         while(op==0);
         }
