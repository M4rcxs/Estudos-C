#include <stdio.h>

int main(void) {
    struct calculo
    {
        int a;
        int b;
    };
    struct calculo variavel;

    scanf("%d", &variavel.a);
    scanf("%d", &variavel.b);
    int total = (variavel.a + variavel.b);
    printf("%d\n", total);
    return 0;
}