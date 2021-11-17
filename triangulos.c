#include <stdio.h>
#include <math.h>

int main (void){
    double a = 0,b = 0,c = 0, i;

    scanf("%lf %lf %lf", &a,&b,&c);


    if(b > a && b > c){
        i = b;
        b = a;
        a = i;
    }
    else if(a > b && a > c){
        a = a;
    }
    else if (c > a && c > b){
        i = c;
        c = a;
        a = i;
    } 
    if(a >= b+c){
        printf("\nNAO FORMA TRIANGULO"); 
    }

    if(a * a == b*b + c*c){
        printf("\nTRIANGULO RETANGULO");   
    }
    if(a*a > (b*b) + (c*c) && b == c){
        printf("\nTRIANGULO OBTUSANGULO");
    }
    if(b*b + c*c > a*a){
        printf("\nTRIANGULO ACUTANGULO");
    }
    if(a == b && b == c){
        printf("\nTRIANGULO EQUILATERO");
    }
    if((a == c && b != c) || (b == c && c != a) || (c == a && a != b) ){
        printf("\nTRIANGULO ISOSCELES");
    }
}