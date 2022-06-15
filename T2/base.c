#include <stdio.h>

int main () {
    int h = 8;
    int b = h++ + h++ + h++;

    printf("%d", h);
    return 0;
}