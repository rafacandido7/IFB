#include <stdio.h>

int main(){
    printf("===== Comparação =====\n");
    int x;

    printf("Insira um valor:\n");
    scanf("%d", &x);

    if ((x % 2 == 0 && x > 10) || (x % 2 != 0 && x < 50)){
        printf("SIM\n");
    } else {
        printf("NÃO\n");
    }
}