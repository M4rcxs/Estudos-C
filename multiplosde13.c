#include <stdio.h>

int main(void){
    int a, b, i, r=0, cont;
    scanf("%d %d", &a, &b);
    if(b > a){
        i = b;
        b = a;
        a = i;
    }
    for(cont = b; cont <= a; cont++){
        if(cont%13 != 0){
            r += cont;
        }
    }
    printf("\n%d", r);
}