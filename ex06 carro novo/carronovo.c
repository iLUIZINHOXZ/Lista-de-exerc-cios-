#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    double valor, precoFinal, imposto;
    printf("Qual o valor do carro que voce deseja comprar: ");
    scanf("%lf", &valor);

    imposto = (valor / 100) * 73;
    precoFinal = valor - imposto;
    printf("O valor do carro sem impostos ficaria = %.2lf, com impostos fica = %.2lf.", precoFinal, valor);

    return 0;
}