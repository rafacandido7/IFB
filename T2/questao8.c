#include <stdio.h>

int main () {
    printf("====== MDC ======\n");
    printf("Escreva dois números m e n:\n");
    int m, n, i, x = 1;
    scanf("%d %d", &m, &n);

    if (n == 0) {
        printf("MDC de m e n quando n = 0 é %d.\n", m);
    } else {
        while (i <= m) {
            if ((m % i == 0) && (n % i == 0)) {
                x = x*i;
            }
            i++;
        }
        printf("MDC de m e n é %d.\n", x);
    }
}