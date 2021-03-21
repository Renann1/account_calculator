#include <stdio.h>
#include <stdlib.h>

int main()
{
 
float media, valorc;
int pessoas;

printf("digite o valor da conta ");
scanf("%f",&valorc);

printf("digite quantidade de pessoas ");
scanf("%d",&pessoas);

media = (valorc / pessoas ) ;
  printf("o valor por pessoa é : %.2f.", media);

  return 0;
}
