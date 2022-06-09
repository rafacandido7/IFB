#include <stdio.h>

int main(void) {

    int i, n[10];
    for (i = 0; i < 10; i++) {
        printf("Entre com o valor de n[%02d]: \n", i++);
        scanf("%d", &n[i]);
    }
    for (int j = 0; j < 10; j++) {
        for (int k = j + 1; k < 10; k++) {
            if (n[j] < n[k]) {
                int temp = n[j];
                n[j] = n[k];
                n[k] = temp;
            }
        }
    }
    printf("O segundo maior valor e %02d.\n", n[1]);
    
    return 0;
}