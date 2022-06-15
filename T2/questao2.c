#include <stdio.h>

int main () {
    int a, b;
    printf("====== Potenciação ======\n");
    printf("Insira o valor a e b, onde a resposta sairá a^b.\n");
    scanf("%d %d", &a, &b);

    int n = 1;
    int i = 0;

    while (i < b) {
        n = n*a;
        i ++;
    }

    printf("a^b será %d.\n", n);
}