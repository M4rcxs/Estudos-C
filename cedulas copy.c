#include <stdio.h>

int main (void) {
    int n = 0, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0;
    scanf("%d", &n);
    cem = n/100;

    n = n % 100;

    cinquenta = n/50;

    n = n % 50;

    vinte = n/20;

    n = n % 20;

    dez = n/10;

    n = n % 10;

    cinco = n/5;

    n = n % 5;

    dois = n/2;

    n = n % 2;

    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    return 0;
}