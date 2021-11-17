#include <stdio.h>
#include <math.h>

int main(void){
    double n;
    scanf("%lf", &n);

    if(n>=0 && n<=25.0){
        printf("Intervalo (0,25]");
    }
    else if(n > 25.0 && n <=50.0){
        printf("Intervalo (25,50]");
    }
    else if(n > 50.0 && n <=75.0){
        printf("Intervalo (50,75]");
    }
    else if(n > 50.0 && n <=100.0){
        printf("Intervalo (75,100]");
    }
    else{
        printf("Fora de intervalo");
    }
}