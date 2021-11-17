#include <stdio.h>

int main(void){
    int cont, a, nota, maior=0;
    scanf("%d", &a);
    for(cont = 1; cont<=a; cont++){
        scanf("%d", &nota);
        if(nota > 10 || nota < 0){
            continue;           //ignora o laço
        }
        if(maior >= cont){
            maior = nota;
            //printf("%d", maior);
        }
    }
    printf("%d", maior);
    return 0;
}