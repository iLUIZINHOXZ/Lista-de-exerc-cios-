#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
   int eleitores,votos_em_branco,votos_nulos, votos_validos;
   float porcentagem_votos_validos, porcentagem_votos_em_branco,porcentagem_votos_nulos;
   
   printf("Digite quantos eleitores tiveram? ");
   scanf("%d",&eleitores);
   
   
   printf("quantos votos em branco? ");
   scanf("%d",&votos_em_branco);
   
   printf("quantos votos nulos? ");
   scanf("%d",&votos_nulos);
   
   printf("quantos foram válidos? ");
   scanf("%d",&votos_validos);
   
   
   porcentagem_votos_validos = (( (float)votos_validos )/(float)eleitores)*100;
   porcentagem_votos_em_branco = (( (float)votos_em_branco )/(float)eleitores)*100;
   porcentagem_votos_nulos = (( (float)votos_nulos )/(float)eleitores)*100;
   
   
    printf("\nEleitores:\t\t%d\nVotos Válidos:\t\t%.2f%%\nVotos em Branco:\t%.2f%%\nVotos Nulos:\t\t%.2f%%",eleitores,porcentagem_votos_validos,porcentagem_votos_em_branco,porcentagem_votos_nulos );