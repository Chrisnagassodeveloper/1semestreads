#include <stdio.h>

void main()
{
int n1, n2, r1, r2, r3, r4, r5, r6;

printf("Digite um numero: ");
scanf("%d", &n1);
printf("Digite outro numero: ");
scanf("%d", &n2);
 r1 = n1 < n2;
 printf("%d < %d = %d \n", n1, n2,r1);
 r2 = n1 > n2;
 printf("%d > %d = %d \n", n1, n2, r2);
 r3 = n1 <= n2;
 printf("%d<= %d = %d \n", n1, n2, r3);
 r4 = n1 >= n2;
 printf("%d >= %d = %d \n", n1, n2, r4);
 r5 = n1 ==n2;
 printf("%D == %d = %d \n", n1, n2, r5);
 r6 = n1 != n2;
 printf("%d != %d = %d \n", n1, n2, r6);
}
