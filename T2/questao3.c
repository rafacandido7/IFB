#include <stdio.h>

int main () {
    int a;
    printf("====== Soma ======\n");
    printf("Insira um valor 'a', a resposta sairá a soma de 1 até 'a'.\n");
    scanf("%d", &a);

    int n = 0;
    int i = 0;

    while (i <= a) {
        n += i;
        i ++;
    }

    printf("A soma de 1 até 'a' será: %d\n", n);
}