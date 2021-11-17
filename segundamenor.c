#include <stdio.h> //Funciona

int main(void){
    int cont, a, nota, menor = 10, menor2;
    scanf("%d", &a);
    for(cont = 1; cont<=a; cont++){
        scanf("%d", &nota);
        if(nota > 10 || nota < 0){
            continue;           //ignora o laço
        } 
        if(nota < menor){    
            menor2 = menor;
            menor = nota;
        }
        if(nota < menor2 && nota > menor){
            menor2 = nota;
        }
    }
    printf("%d", menor2);
    return 0;
}