#include <stdio.h>

int main()
{

    float preco, preco_final;
    char categoria;
    printf("Escolha uma categoria: \n");
    printf("E - Estudante\nA - Aposentado\nN - Normal\n");
    scanf("%c", &categoria);
    printf("Digete o preco do ingresso: ");
    scanf("%f", &preco);

    switch (categoria)
    {
    case 'a':
    case 'A':
        preco_final = preco * 0.5f;
        printf("Preco: %f\n", preco_final);
        break;
    case 'e':
    case 'E':
        preco_final = preco * 0.7f;
        printf("Preco: %f\n", preco_final);
        break;
    case 'n':
    case 'N':
        printf("Preco sem desconto: %f\n", preco);
        break;
    default:
        printf("Categoria invalida!\n");
        break;
    }
    return 0;
}