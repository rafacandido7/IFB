#include <stdio.h>

int main () {
    int n;
    int i = 2;
    printf("====== Numeros divisores de n ======\n");
    printf("Insira o valor n:\n");
    scanf("%d", &n);

    printf("Os divisores de %d são:\n", n);

    while (i <= n) {
            if (n % i == 0) {
                printf("%d\n", i);
            } 
        i++;
    }

    printf("FIM!\n");
    
}