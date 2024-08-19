#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv) {
	float salario_fixo;
	int quantidade_carros;
	float valor_total_vendas;
	
	printf("salario fixo: R$");
	scanf("%f", & salario_fixo);
	
	printf("quantidade de carros vendido:");
	scanf("%d", & quantidade_carros);
	
	printf("valor total das vendas: R$");
	scanf("%f", & valor_total_vendas);
	
	float comissao = 0.05 * valor_total_vendas;
	float salario_total = salario_fixo + comissao;
	
	printf("salario total do mes: R$ %.2f\n", salario_total);
	return 0;
}
