#include <stdio.h>

int main () {
    int numero, resto, divisor;

    printf("Digite o número:\n");
    scanf("%d", &numero);

    for (divisor = 1; divisor <= numero; divisor++) {
        resto = numero % divisor;
        if (resto == 0) {
            printf("Divisor:%d\n", divisor);
        }
    }
    return 0;
}