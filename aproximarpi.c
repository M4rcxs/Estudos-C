#include <stdio.h>

int main (void){
    int N, c;
    float result_pi, aproximado = 0, i = 0, j = 0;
    scanf("%d", &N);
    for(c = 0; c < N; c++){
        for(i = 2; i <= N * 2; i += 2){
            for(j = 1; j < N * 2; j += 2){
                aproximado = i / j;
            }
         }
      }
    result_pi = 2 * aproximado;
    printf("%.6f", result_pi);
    return 0;
}