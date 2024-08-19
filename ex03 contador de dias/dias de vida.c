#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
   int meses,anos,dias,dias_totais;
   
   
   printf("Digite quantos anos você tem? ");
   scanf("%d",&anos);
   
   
   printf("quantos meses de vida você tem? ");
   scanf("%d",&meses);
   
   printf("quantos dias você tem de vida? ");
   scanf("%d",&dias);
   
   
   dias_totais = (anos * 365) + (meses * 30) + dias;
   
   
    printf("você tem no total aproximadamente %d dias de vida" ,dias_totais);


  
  	
  return 0;
}