#include <math.h>
#include <stdio.h>
	
int main () {
	printf("===== Área do Triângulo de lados a, b e c=====\n");
	int a;
	int b;
    int c;
    int p;
    int s;

    printf("Qual é o valor do lado a?\n");
	scanf("%d", &a);
	

    printf("Qual é o valor do lado b?\n");
	scanf("%d", &b);

    printf("Qual é o valor do lado c?\n");
	scanf("%d", &c);

    p = (a+b+c)/2;

	s= sqrt(p*(p - a)*(p - b)*(p - c));

	printf("A área do triângulo é %d.\n", s);

	return 0;
}