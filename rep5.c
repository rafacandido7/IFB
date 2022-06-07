#include <stdio.h>

int main ()  {
    printf("MDC de numero positivos!\n");
    int numeroA, numeroB, resto;

    printf("Digite dois números (ordem crescente);\n");
    scanf("%d %d", &numeroA, &numeroB);

    do{
        resto = numeroB % numeroA;
        numeroB = numeroA;
        numeroA = resto;
    }while(numeroA > 0); 

    printf("MDC: %d\n", numeroB);
    return 0;
}