#include <stdio.h>

int fat(int);
float expo(float, int);
float magico(float, int);

int main(void){
    int i, n, b = -1;
    int result_fat;
    float x, result_total;
    scanf("%f", &x);
    scanf("%d", &n);
    printf("%f", magico(x, n));
}
int fat(int n) {
    int fatorial;
    if(n == 0) {
        return 1;
    }
    return n * fat(n - 1);
}

float expo(float b, int e) {
    float total = 1;
    int i;
    for(i = 0; i < e; i++){
        total = total * b;
    }
    return total;
}

float magico(float x, int n) {
    int i;
    float result_total = 0;
    for(i = 0; i<= n; i++){
        result_total += expo(-1, i) * expo(x, (2*i+1))/fat(i + 1);
    }
    return result_total;
}