#include <stdio.h>

int main (void){
    int a,b,c, d, e, i, p=1;

    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    if(b > a && b > c && b > d && b > e){
        i = b;
        a = i;
        p = 2;
    }
    else if(c > a && c > b && c > d && c > e){
        i = c;
        a = i;
        p = 3;
    } 
    else if(d > a && d > b && d > c && d > e){
        i = d;
        a = i;
        p = 4;
    }
    else if(e > a && e > b && e > c && e > d){
        i = e;
        a = i;
        p = 5;
    }
    printf("%d\n", a);
    printf("%d", p);
    return 0;
}