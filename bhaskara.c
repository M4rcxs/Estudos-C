#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,r1,r2;
    int d;

    scanf("%lf %lf %lf", &a,&b,&c);

    r1 = -b + sqrt(b*b - 4*a*c);
    r2 = -b - sqrt(b*b - 4*a*c);

    r1 = r1 / (2*a); 
    r2 = r2 / (2*a);

    d = sqrt(b*b - 4*a*c);

    if(d<=0 || a==0){
        printf("Impossivel calcular");
    }
    else{
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf", r2);
    }
}