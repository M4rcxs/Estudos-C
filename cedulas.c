#include <stdio.h>

int main (void) {
    int n = 0, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    scanf("%d", &n);
    printf("%d\n", n);
    cem = n/100;

        printf("%d nota(s) de R$ 100,00\n", cem);

    n = n % 100;

    cinquenta = n/50;

        printf("%d nota(s) de R$ 50,00\n", cinquenta);

    n = n % 50;

    vinte = n/20;

        printf("%d nota(s) de R$ 20,00\n", vinte);

    n = n % 20;

    dez = n/10;

        printf("%d nota(s) de R$ 10,00\n", dez);

    n = n % 10;

    cinco = n/5;

        printf("%d nota(s) de R$ 5,00\n", cinco);

    n = n % 5;

    dois = n/2;

        printf("%d nota(s) de R$ 2,00\n", dois);

    n = n % 2;

    um = n/1;
    
        printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}