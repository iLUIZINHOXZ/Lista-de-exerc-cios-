#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    double nota1, nota2, nota3, mediaFinal;

    printf("Digite a primeria nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota2);

    mediaFinal = (2 * nota1) + (3 * nota2) + (5 * nota3) / 10;
    printf("\nMEDIA FINAL = %.1lf\n", mediaFinal);

    return 0;
}