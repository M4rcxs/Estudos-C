#include<stdio.h>

int main(void) {
    int n, i;
    double nota[100], peso[100], soma = 0, media = 0;

    scanf("%d", &n); // recebe a quantidade de entradas  
    for(i = 0; i < n; i++) { //captura a quantidade pedida de entradas, nos vetores notas e peso.
        scanf("%lf", &peso[i]);
        scanf("%lf", &nota[i]);
        //printf("%lf\n", soma);
        media += (nota[i] * peso[i]); //a soma da multiplicação dos vetores em suas respectivas posições
        soma += peso[i]; //soma dos pesos
    }
    media /= soma;
    printf("%lf", media); //realiza o calculo diretamente no printf
    return 0;
}