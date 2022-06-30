#include <stdio.h>

int main() {
    int n = 0,d,r=0, cont;

    printf("Entre com um numero: ");
    scanf("%d", &n);
    do {
        cont = 0;
        d = 1;
        n++;
        while (d <= n) {
            r = n % d;
            if (r == 0) {
                cont++;
            }
            d++;
        }
        
    } while (cont != 2);
    
    printf("Maior Numero Primo: %d\n", n);
    
    return 0;
}