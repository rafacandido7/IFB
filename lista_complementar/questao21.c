#include <math.h>
#include <stdio.h>
	
int main () { 
    printf("===== Quantos dias se passaram até hoje? =====\n");
	int dia, mes, mesr, diar, resultado;

    printf("Insira o dia e o mês:\n");
    scanf("%d%d", &dia, &mes);

    if (mes > 0 && mes <= 12 && dia > 0 && dia <= 30){
    diar = dia - 1;
    mesr = mes - 1;
    resultado = diar + 30*mesr;

	printf("Já se passaram %d dias.\n", resultado);
} else {
    printf("Insira uma data válida\n");
}
    return 0;
}