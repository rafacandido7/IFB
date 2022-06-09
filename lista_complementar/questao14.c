#include <stdio.h>

int main () {
    printf("Qual é o tipo de triângulo?\n");
    int a, b, c;

    printf("Digite os lados do triângulo:\n");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a == b && a == c && b == c) {
        printf("Esse é um triângulo equilátero\n");
    } else if (a != b && a != c && b != c) {
        printf("Esse é um triângulo escaleno\n");
    } else {
        printf("Esse é um triângulo isósceles\n");
    }
    
    return 0;
}