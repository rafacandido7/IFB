#include <math.h>
#include <stdio.h>
	
int main () {
	printf("===== Função f(x) =====\n");
	printf("Qual é o valor de x?\n");

	int x = 0;

	scanf ("%d",&x);

	printf("%d\n", x);

	float raiz = sqrt(x);
	printf("%f\n", raiz);
	float exp = pow(x,x);
	printf("%f\n", exp);

	return 0;
}