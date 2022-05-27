#include <stdio.h>
	
int main () {
	printf("Troque as variáveis x e y\n");

    int x;
    int y;

    printf("Escreva a variável x:");
    scanf("%d", &x);

    printf("Escreva a variável y:");
    scanf("%d", &y);
	
    x = x + y;
    y = x - y;
    x = x - y;

    printf("A troca gera x = %d e y = %d\n", x, y);

	return 0;
}