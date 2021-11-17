#include <stdio.h>

int main(void){
    int cont, a, nota, soma = 0, i=0;
    scanf("%d", &a);
    for(cont = 1; cont<=a; cont++){
        scanf("%d", &nota);
        if(nota > 10 || nota < 0){
            continue;           
        }
        i++; 
        soma += nota;
    }
    printf("%.1f", (float)soma/i);
    return 0;
}