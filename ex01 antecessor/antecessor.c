#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
   int numero,antecessor;
   
   
   printf("Digite um número e descubra seu antecessor : ");
   scanf("%d",&numero);
   antecessor = numero - 1;
   
   
    printf("\nvocê digitou o número:\t%i\no antecessor é:\t%i",numero,antecessor);


  
  	
  return 0;
}

