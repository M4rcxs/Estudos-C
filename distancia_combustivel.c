#include <stdio.h>

int main (void) {
  int distancia, tempo, km, vm; //km é quilometro por litro, que no caso é 12, então 2L = 24km
  float combustivel;
  scanf("%d %d", &tempo, &vm); //tempo é igual as horas gastas na viagem, no caso km/h, a cada uma hora ele faz 1km
  distancia = tempo * vm; 
  combustivel = distancia/12.0;
  printf("%.3f", combustivel);
  return 0;
}