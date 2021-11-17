#include <stdio.h>
#include <math.h>

int main (void){
    int i, a, b, n, fim = 0;
    do{
        printf("Digite uma opcao: ");
        scanf("%d", &i);
        switch (i) {
        case 1:
            printf("Digite a: ");
            scanf("%d", &a);
            printf("Digite b: ");
            scanf("%d", &b);
            n = a+b;
            printf("Resultado : %d\n", n);
        break;
        
        case 2:
            printf("Digite a: ");
            scanf("%d", &a);
            printf("Digite b: ");
            scanf("%d", &b);
            n = a-b;
            printf("Resultado : %d\n", n);
        break;

        case 3:
            printf("Digite a: ");
            scanf("%d", &a);
            printf("Digite b: ");
            scanf("%d", &b);
            n = a*b;
            printf("Resultado : %d\n", n);
        break;

        case 4:
            printf("Digite a: ");
            scanf("%d", &a);
            printf("Digite b: ");
            scanf("%d", &b);

            printf("Resultado : %.1lf\n", (double) a/b);
        break;

        case 5:
            fim = 1;
            printf("Encerrado.");
        break;

        default: printf("Valor invalido.\n");
        break;
        }
    }
    while(fim!=1);
    return 0;
}