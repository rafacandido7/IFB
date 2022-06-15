#include <stdio.h>

int main () {
    printf("====== Menu ======\n");
    printf("Escolha o seu Pedido:\n");
    int n;

    while (n != 5) {
        printf("1. Hamburger\n");
        printf("2. Sushi\n");
        printf("3. Pizza\n");
        printf("4. Batata Frita\n");
        printf("5. Exit\n");

        scanf("%d",&n);
        
        if (n == 1) {
            printf("Hamburger\n");
        } else if (n == 2) {
            printf("Pizza\n");
        } else if (n == 3) {
            printf("Sushi\n");
        } else if (n == 4) {
            printf("Batata Frita\n");
        }
    }

    printf("Você encerrou o Menu\n");

    return 0;
    
}