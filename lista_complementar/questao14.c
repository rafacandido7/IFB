#include <stdio.h>

int main () {
    printf("Qual é o tipo de triângulo?\n");
    double a, b, c;

    printf("Digite os lados do triângulo:\n");
    scanf("%ls, %ls, %ls", &a, &b, &c);

    if ((a = b ) && (b = c) && (a = c)) {
        printf("É um triângulo equilátero!\n");
    } else if ((a != b) && (a != c) && (b != c)) {
        printf("É um triângulo escaleno!\n");
    } else {
        printf("É um triângulo isosceles\n");
    }

    return 0;
}