#include <stdio.h>

int main() {
    int n, i;
    double r;
    printf("============ Raiz quadrada (Aproximação de Newton) ============\n");
    printf("Insira o número para obter a aproximação da raiz quadrada: \n");
    scanf("%d", &n);

    for (i = 1; i <= 20; i++) {
        r = n - ((n*n)/ (2.0 * n));
    }
    
    printf("√%d = %.4lf\n", n, r);

    return 0;
}