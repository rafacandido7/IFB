#include <stdio.h>

int main () {
    printf("========= Números em ordem =========\n");
    int a = 1, i, j = 0;
    printf("Quantos números você vai inserir?\n");
    scanf("%d", &a);
    int numeros[] = {};

    for (i = 0; i <= a; i++) {
        printf("Insira o %dº número\n", (i+1));
        scanf("%d", &numeros[i]);
    }

    printf("%d\n", numeros[]);
    printf("%d\n", numeros[]);
    printf("%d", numeros[]);
    while (j < a) {
        if (numeros[j] < numeros[j+1]) {
        printf("Os números estão em ordem.\n");
        break;
        } else {
        printf("Os números estão em ordem.\n");
        break;
        }
    }
    
}