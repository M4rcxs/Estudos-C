#include <stdio.h>
int main (){
  int v[10], i, n=0, soma;
  
  for(i=0; i<10; i++) {
    printf("insira o valor: ");
    scanf("%d", &v[i]);
    n = n + v[i];
    soma = (n * v[i]);
    soma = soma + v[i];
  }
printf("Resultado: %d", soma);

  return 0;
}