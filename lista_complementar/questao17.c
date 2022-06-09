#include <math.h>
#include <stdio.h>
	
int main () { 
    printf("===== Você pode aposentar? =====\n");
	char sexo;
    int idade, contribuicao;

    printf("Insira o seu sexo? Masculino (M) ou Feminino (F)?\n");
    scanf("%c",&sexo);

    printf("Qual é a sua idade?\n");
    scanf("%d", &idade);

    printf("Quanto tempo você contribuiu para o INSS?\n");
    scanf("%d", &contribuicao);

    if (sexo == 'M') {
        if ((idade >= 65 && contribuicao >=10) || (idade >= 63 && contribuicao >= 15)) {
            printf("Pode aposentar!\n");
        } else {
        printf("Não pode aposentar!\n");
        }
    } else if (sexo == 'F') {
        if ((idade >= 63 && contribuicao >=10) || (idade >= 61 && contribuicao >= 15)) {
            printf("Pode aposentar!\n");
        } else {
        printf("Não pode aposentar!\n");
    } 
    }
	printf("\n");

    return 0;
}