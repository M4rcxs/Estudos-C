#include <stdio.h>

int main(void){
    int n, i = 0, j = 0, v[200], cont;
    scanf("%d", &n);
    for(i = i + 1; i <= n; i++) {
        v[i] = i;
        for(cont = 0; cont != i; cont++) {
            printf("%d ", v[i]);         
        }
    }
}