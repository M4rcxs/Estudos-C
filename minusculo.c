#include <stdio.h>

int main(void){
    char nome[200];
    int i, j;
    scanf("%s", &nome);
    for(i = 0; nome[i] != '\0';i++) {
        if(nome[i] >= 'A' && nome[i] <= 'Z'){
            nome [i] = (nome[i] - 'A') + 'a';
        }  
    }
    printf("%s", nome);
    return 0;
}