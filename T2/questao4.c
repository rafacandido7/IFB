#include <stdio.h>

int main () {
    int n, i;
    printf("====== Numeros divisores de n ======\n");
    printf("Insira o valor n:\n");
    scanf("%d", &n);

    printf("Os divisores de %d são:\n", n);

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
                printf("%d\n", i);
        } 
    }

    printf("FIM!\n");
    
}