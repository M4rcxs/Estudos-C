#include <stdio.h>
int main (){
  int v[10], i, n=0;
  
  for(i=0; i<10; i++) {
    printf("insira o valor: ");
    scanf("%d", &v[i]);
    n = n + v[i];
  }
printf("Resultado: %d", n);

  return 0;
}