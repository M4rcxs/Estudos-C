#include <stdio.h>

int main(void){
    int cont, a, b, i, soma=0;
    scanf("%d %d", &a, &b); 
    if(b > a){
        i = b;
        b = a;
        a = i;
    }
    for(cont = b + 1; cont < a; cont++){
        if(cont%2 != 0){
            soma += cont;
        }
    }
    printf("%d", soma);
    return 0;
}