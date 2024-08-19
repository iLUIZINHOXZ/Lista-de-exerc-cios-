#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
   int celsius,fahrenheit;
   
   printf("Digite o número de graus em Fahrenheit: ");
   scanf("%d",&fahrenheit);
   
   
   celsius =((fahrenheit - 32)/9)*5;
   
   
   
   
    printf("%d graus Fahrenheit equivale a %d graus Celsius;",fahrenheit,celsius);


  
  	
  return 0;
}