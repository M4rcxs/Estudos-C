#include <stdio.h>

int main (void) {
    int i, j, result[8], rest, n, temp;

    scanf("%d", &n); // recebe o valor
    if(n == 0){
        printf("0");
    }
    for(i = 0; n != 0; i++) { //para i = 0; enquanto o n diferente de 0; incrementar i (para add valor aos vetores)
        temp = n; //variavel temporaria para se igualar ao valor pedido
        rest = temp%2; //o resto é igual ao modulo
        result[i] = rest; //o resultado é igual ao resto
        n /= 2; // n divide por dois porque o valor de n precisa diminuir conforme a divisão é feita.
    }
    for(i = i - 1; i >= 0; i--) { //imprime o vetor ao contrario 
        printf("%d", result[i]);
    }
    return 0;
}