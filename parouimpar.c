#include <stdio.h>
#include <math.h>

int main(void){
    int a=0;
    scanf("%d", &a);
    a = a%2;
    if (a == 0){
        printf("par");
    }
    else{
        printf("impar");
    }
    return 0;
}