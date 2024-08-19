#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
   float base,altura,retangulo;
   
   
   printf("Digite a base do retângulo : ");
   scanf("%f",&base);
   
   printf("Digite a altura do retângulo : ");
   scanf("%f",&altura);
   
    retangulo = abs(base * altura);
   
    printf("o  retângulo com base %.2f e altura %.2f tem sua área igual a %.2f" ,base, altura,retangulo);


  
  	
  return 0;
}