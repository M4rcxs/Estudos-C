#include <stdio.h>

int main(void){
    int a, r=0, cont;
    scanf("%d", &a);
    for(cont=0; cont<a; cont ++){
        if(cont%3 == 0 || cont%5 == 0){
            r += cont;
        }
    }
    printf("%d", r);
}