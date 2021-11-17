#include <stdio.h>

int main(void){
    int a, cont, menor, p = 0;
    scanf("%d", &a);
    int v[a];
    for(cont = 0; cont < a; cont++) {
        scanf("%d", &v[cont]);
    }
    menor = v[0];
    for(cont = 1; cont < a; cont++) {
        if(v[cont] < menor) {
            menor = v[cont];
            p = cont;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", p);
    return 0;
}