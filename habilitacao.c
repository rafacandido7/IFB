#include <stdio.h>

int main () {
    int idade, idade_rest;
    printf ("Digite sua idade: ");
    scanf("%d", &idade);

    idade_rest = 18 - idade;

    if ((idade > 0) && (idade < 18)) {
        printf("Não possui a CNH. \n");

    } else if ((idade >= 18) && (idade < 65)) { 
        printf("Renoavar a CNH em 5 anos!\n");
    } else if ( 65 >= idade ) {
        printf("Renoavar a CNH em 5 anos!\n");
    }

    return 0;
}