#include <math.h>
#include <stdio.h>
	
int main () {
	printf("===== Função f(x) =====\n");
	printf("Qual é o valor de x?\n");

	int x = 0;
	scanf("%d", &x);
	int result;

	result = sqrt(x)+(x/2)+pow(x,x);

	printf("O Resultado de f(%d) e %d\n", x, result);

	return 0;
}