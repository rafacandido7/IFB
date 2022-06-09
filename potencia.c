#include <stdio.h>
#include <math.h>

int main () {
    int numero, qnt, multiplo, i;

    printf("Digite o número:\n");
    scanf("%d", &numero);
    printf("Digite a quantidade de potencias:\n");
    scanf("%d", &qnt);
    printf("\n");

    for (i = 1; i <= qnt; i++) {
        multiplo = pow(numero, i);
        printf("%d\n", multiplo);
    }

}