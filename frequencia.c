#include <stdio.h>

int main(void){
    int cont, a, nota, media=5, soma=0;
    scanf("%d", &a);
    for(cont = 1; cont<=a; cont++){
        scanf("%d", &nota);
        if(nota > 10 || nota < 0 || nota < 5){
            continue;           //ignora o laço
        }
            soma += 1;
    }
    printf("%d", soma);
    return 0;
}