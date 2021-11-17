#include <stdio.h>

int main(void){
    int i, n, cont = 0, v[100], menor = 10, menor2;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]); 
        if(v[i] < menor){ 
            menor2 = menor;
            menor = v[i];
        }
    }
    //printf("%d ", cont);
    //printf("\n%d ", menor);
    return 0;
}