#include <stdio.h>

int main() {
    int n, i, j;

    printf("Digite um número: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf("%d", j);
        }
        printf("%d\n", i);
    }

    return 0;
}