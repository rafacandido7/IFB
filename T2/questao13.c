#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    float fatorial = 1;
    if (n == 0) {
        printf("O fatorial de %d e igual a 1", n);

    } else if (n > -1) {
        while (n > 0) {
            fatorial *= n;
            n--;
        }
            printf("O fatorial de %d e igual a %f\n", n, fatorial);
    } else {
        printf("Nao existe fatorial de %d\n", n);
    }
    
    return 0;
}