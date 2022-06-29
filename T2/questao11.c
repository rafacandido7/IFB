#include <stdio.h>

int main() {
    int primeiroIntervalo = 0, segundoIntervalo = 0, terceiroIntervalo = 0, quartoIntervalo = 0, n, i;
    float x;
    printf("========= Pertence ou não aos intervalos? =========\n");
    printf("Intervalo [0 , 25]\n");
    printf("Intervalo [26 , 50]\n");
    printf("Intervalo [51 , 75]\n");
    printf("Intervalo [76 , 100]\n");
    printf("Quantos números você quer analisar nos intervalos?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %dº número:\n", i);
        scanf("%f", &x);
        if ((0 <= x) && (x <= 25)) {
            primeiroIntervalo++;
        } else if ((26 <= x) && (x <= 50)) {
            segundoIntervalo++;
        } else if ((51 <= x) && (x <= 75)) {
            terceiroIntervalo++;
        } else if ((76 <= x) && (x <= 100)) {
            quartoIntervalo++;
        }
        x = 0;
    }

    printf("Intervalo [0 , 25]: %d\n", primeiroIntervalo);
    printf("Intervalo [26 , 50]: %d\n", segundoIntervalo);
    printf("Intervalo [51 , 75]: %d\n", terceiroIntervalo);
    printf("Intervalo [76 , 100]: %d\n", quartoIntervalo);


    return 0;
}