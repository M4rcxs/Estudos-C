#include <stdio.h>

int main (void){
    int x, i;
    double n1, n2, n3, media;
    scanf("%d", &x);
    for(i = 1; i <= x; i++){
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        media = (n1*2 + n2*3 + n3*5) / (2+3+5);
        printf("media : %.1lf\n", media);
    }
}