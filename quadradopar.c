#include <stdio.h>

int main (void){
    int a, cont, i, quadrado;
    scanf("%d", &a);
    for(cont = 1; cont <= a; cont++){
        if(cont%2 == 0){
            quadrado = cont * cont;
            printf("\n%d^%d = %d", cont, cont, quadrado);
        }
    }
    return 0;
}