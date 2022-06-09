#include <math.h>
#include <stdio.h>
	
int main () { 
    printf("===== Em qual quadrante está a coordenada? =====\n");
	int x, y;

    printf("Insira a coordenada (x,y): \n");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0) {
        printf("A coordenada está no 1º Quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("A coordenada está no 2º Quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("A coordenada está no 3º Quadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("A coordenada está no 4º Quadrante.\n");
    } else {
        printf("A coordenada está na origem.\n");
    }
}