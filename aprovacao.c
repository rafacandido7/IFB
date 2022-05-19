#include <stdio.h>

int main () {
    int idade;
    float media;

    printf ("Digite a sua idade: \n");
    scanf ("%d", &idade);

    printf ("Digite a sua média nos exames: \n");
    scanf ("%f", &media);

    if ((idade >= 18) && (media >= 5.0)) {
        printf ("Você está aprovado!\n");
    } else {
        printf ("Você ainda não foi aprovado.\n");
    };

    return 0;
}