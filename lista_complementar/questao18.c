#include <math.h>
#include <stdio.h>
	
int main () { 
    printf("===== Calculadora =====\n");
	int x,y;
    char operacao;
    float resposta;

    printf("Qual operação você quer fazer? Adição (A), Subtração (S), Multiplicação (M) ou Divisão (D)\n");
    scanf("%s",&operacao);

    printf("Insira 2 valores\n");
    scanf("%d%d", &x, &y);

    if (operacao == 'A') {
        resposta = x + y;
        printf("%lf\n", resposta);
    } else if (operacao == 'S') {
        resposta = x - y;
        printf("%lf\n", resposta);
    } else if (operacao == 'M') {
        resposta = x * y;
        printf("%lf\n", resposta);
    } else if (operacao == 'D') {
        resposta = x / y;
        printf("%lf\n", resposta);
    } else {
        printf("Não é operação.\n");
    }

    return 0;
}