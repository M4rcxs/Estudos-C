#include <stdio.h>

int main(void){
    int n,r=0,i;
	scanf("%d", &n); // recebe valor do usuario
    
    for(i=1; i<=n; i++){     //faz uma repetição pra poder pegar quantas vezes o R ta sendo somado,
        if(n%i == 0){        // ou seja, quantas vezes o resto é igual a 0.
            r++;
        }
    }
    if(r == 2){ // se o resto for igual a zero apenas duas vezes, o valor N é primo, pois o numero primo só consegue ter resto igual a 0, quando se divide por um e por ele mesmo.
        printf("\nprimo");
    }
    else{
        printf("\nnao");
    }
}