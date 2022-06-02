#include <math.h>
#include <stdio.h>
	
int main () { 
    char x;
    double f, c;
    printf("===== Conversor de Temperatura =====\n");

    printf("Você vai inserir em Farhrenheit (F) ou Celsius (C)?\n");
    scanf("%c", &x);

    if (x == 'F') {
        printf("Insira o valor da temperatura em Farhenheit:\n");
        scanf("%lf", &f);

        c = (((f - 32)*5)/9);

        printf("%lf\n", c);

    } else if (x == 'C') {
        printf("Insira o valor da temperatura em Celsius:\n");
        scanf("%lf", &c);

        f = ((1.8*c) + 32);

        printf("%lf\n", f);

        }

    return 0;
}