#include <stdio.h>

int main(){
    printf("===== Comparação =====\n");
    int a, b, c;

    printf("Insira três valores:\n");
    printf("Insira a:\n");
    scanf("%d", &a);

    printf("Insira b:\n");
    scanf("%d", &b);

    printf("Insira c:\n");
    scanf("%d", &c);

    if ((a >= b) && (a >= c)) {
        printf("%d\n", a);
    } else if (b >= c) {
        printf("%d\n", b);
    } else {
    printf("%d\n", c);
    }
}