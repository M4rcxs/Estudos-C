#include <stdio.h>
int soma();
int multi();
int main (void) {
    int x, y, c, n = 1;
    while(n == 1) {
        printf("Escolha uma opcao: \n");
        printf("(1) Soma\n");
        printf("(2) Multiplicacao\n");
        printf("(3) Exit\n");
        scanf("%d", &c);
        if(c == 1) {
            printf("Digite dois numeros: \n");
            scanf("%d %d", &x, &y);
            printf("Soma: %d\n", soma(x, y));
            printf("\n");
        }
        else if(c == 2) {
            printf("Digite dois numeros: \n");
            scanf("%d %d", &x, &y);
            printf("Multiplicacao: %d\n", multi(x ,y));
            printf("----------------------------------\n");
        }else if(c == 3) {
            printf("\nCancelado.");
            n = 0;
        }else{
            printf("Invalido\n");
        }
    }
    return 0;
}
int soma(int a, int b) {
    int total;
    total = a + b;
    return total;
}
int multi(int a, int b) {
    int total;
    total = a * b;
    return total;
}

