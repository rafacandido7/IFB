#include <math.h>
#include <stdio.h>
	
int main () { 
    printf("===== Quando será a pascoa (de 1582 até 2299) =====\n");
	int ano, x, y, a, b, c, d, e, dia, mes;

    printf("Insira o valor do ano\n");
    scanf("%d",&ano);

    if (ano >= 1582 && ano <= 1699) {
        x = 22;
        y = 2;
    } else if (ano >= 1700 && ano <= 1799) {
        x = 23;
        y = 3;
    } else if (ano >= 1800 && ano <= 1899) {
        x = 23;
        y = 4;
    } else if (ano >= 1900 && ano <= 2099) {
        x = 24;
        y = 5;
    } else if (ano >= 2100 && ano <= 2199) {
        x = 24;
        y = 6;
    } else if (ano >= 2200 && ano <= 2299) {
        x = 25;
        y = 7;
    }

    a = ano % 19;
    b = ano % 4;
    c = ano % 7;
    d = ((19 * a) + x) % 30;
    e = ((2 * b) + (4 * c) + (6 * d) + y) % 7;

    if ((d + e) < 10) {
        dia = (d + e + 22);
        mes = 3;
    } else {
        dia = (d + e - 9);
        mes = 4;
    }

	printf("A páscoa será na data %d/%d .\n", dia, mes);
    return 0;
}