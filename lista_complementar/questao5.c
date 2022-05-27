#include <math.h>
#include <stdio.h>
	
int main () {
	printf("===== Área do Triângulo =====\n");
	int b;
	int h;
	int s;

    printf("Qual é o valor da base?\n");

	scanf("%d", &b);

	printf("Qual é o valor da altura?\n");

	scanf("%d", &h);
	

	s= ((b*h)/2);

	printf("A área do triângulo é %d\n", s);

	return 0;
}