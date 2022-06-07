#include <stdio.h>

int main ()  {
    int numero, resto;
    int divisor = 1;

    printf("Digire o numero: \n");
    scanf("%d", &numero);

    while (divisor <= numero){
        resto = numero % divisor;
        if (resto == 0){
            printf("Divisor: %d\n",divisor);
        }
        divisor ++;
    }
    return 0;
}