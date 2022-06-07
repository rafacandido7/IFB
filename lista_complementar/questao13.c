#include <stdio.h>

int main () {
    int ano;

    printf("Verifique se é bissexto!\n");
    printf("Insira um ano:\n");
    scanf("%d",&ano);

    if (ano% 400 == 0) {
        printf("Esse ano é bissexto!\n");
    } else if ((ano % 4 == 0) && (ano% 100 != 0)) {
        printf("Esse ano é bissexto\n!");
    } else {
        printf("Não é um ano bissexto\n");
    }

    return 0;
}   