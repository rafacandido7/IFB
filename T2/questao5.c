#include <stdio.h>

int main () {
    int a;
    printf("====== Numeros até n ======\n");
    printf("Insira um valor 'n'.\n");
    scanf("%d", &a);
    printf("\n");

    int n = 0;
    int i = 1;

    while (i <= a) {
        n += i;
        printf("%d\n", i);
        i ++;
    }

    printf("FIM!\n");
}