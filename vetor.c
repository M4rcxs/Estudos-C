#include <stdio.h>
int main (){
  int v[10], i;
  
  printf("Digite 10 valores: ");
  for (i=0; i<10; i++) {
    scanf("%d", &v[i]);
  }

  printf("Resultado: ");
  for (i=0; i<10; i++) {
    printf("%d ", v[i]);
  }
  return 0;
}