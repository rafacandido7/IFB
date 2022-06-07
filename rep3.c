#include <stdio.h>

int main ()  {
    printf("MDC de numero positivos!\n");
    int numeroA, numeroB, resto;

    printf("Digite dois números (ordem crescente);\n");
    scanf("%d %d", &numeroA, &numeroB);

    while(numeroA > 0) {
        resto = numeroB % numeroA;
        numeroB = numeroA;
        numeroA = resto;
    }

    printf("MDC: %d\n", numeroB);
    return 0;
}