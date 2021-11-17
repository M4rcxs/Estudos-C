#include <stdio.h> //Funciona

int main(void){
    int cont, a, nota, menor=10;
    scanf("%d", &a);
    for(cont = 1; cont<=a; cont++){
        scanf("%d", &nota);
        if(nota > 10 || nota < 0){
            continue;           //ignora o laço
        } 
        if(nota < menor){
            menor = nota;
        }
    }
    printf("%d", menor);
    return 0;
}
/* #####FUNCIONA######
#include <stdio.h>

int main(void) {
    int cont, menor, a, nota;
    scanf("%d", &a);
    for (cont = 1; cont <= a; cont++) {
        scanf("%d", &nota);
        if (nota < 0 || nota > 10)
            continue;
        if (cont == 1 || nota < menor)
            menor = nota;
    }
    printf("%d\n", menor);
    return 0;
}
*/

