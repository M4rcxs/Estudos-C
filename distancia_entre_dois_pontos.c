#include <stdio.h>
#include <math.h>

int main(void){
    double x1=0, x2=0, y1=0, y2=0, d=0, r;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    d = sqrt(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    r = d;
    printf("%.4lf", r);
    return 0;
}