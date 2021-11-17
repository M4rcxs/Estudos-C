#include<stdio.h>

int main (void) {
    int a[100],b[100], i, n, soma = 0, multi = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &b[i]);
        multi = a[i] * b[i];
        soma += multi;
    }
    printf("%d", soma);
    return 0;
}