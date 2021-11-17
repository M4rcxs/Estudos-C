#include <stdio.h>
int repetir();
int main(void) {
    int n, i, j, x, cont = 0;
    int *ponteiro;
    ponteiro = x;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        repetir(x);
    }
    return 0;
}
int repetir(int x) {
    int j, cont;
    int* ponteiro = &cont;
    for(j = 0; j < x; j++){
            printf("%d", x);
            cont++;
        }
    return x;
}