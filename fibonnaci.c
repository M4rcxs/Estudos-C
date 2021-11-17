#include <stdio.h>

int main(void){
    int a, cont, fib=0, somapar = 0, fib1 = 1, fib2 = 1;
    scanf("%d", &a);
    for(cont = 1; fib1 <= a; cont++){
        if(fib1 % 2 == 0){
            somapar += fib1;
        }
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    printf("\n%d", somapar);
}