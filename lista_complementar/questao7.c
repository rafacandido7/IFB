#include <math.h>
#include <stdio.h>
	
int main () { 
    printf("===== Área e perímetro de um disco =====\n");
	int r;
    int p;
    int s;

    printf("Insira o valor do Raio\n");
    scanf("%d",&r);

    p = M_PI*2*r;
    s = M_PI*pow(r,2);

	printf("A área do disco é %d e o perímetro é %d\n", s, p);

}