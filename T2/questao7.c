#include <stdio.h>

int main () {
    printf("========= Números em ordem =========\n");
    int a, i;
    printf("Quantos números você vai inserir?\n");
    scanf("%d", &a);
    int numbers [] = {};

    for (i = 0; i <= a; i++) {
        i++;
        printf("Insira o %dº número\n", i);
        i--;
        scanf("%d", &numbers[i]);
    }

    printf("\n");

    for (i = 0; i<=a; i++) {
        printf("%d\n", numbers[i]);
    }

}