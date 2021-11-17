#include <stdio.h>

int main (void) {
  int valor, mes, ano, dia, i;
  scanf("%d", &valor);

    ano = valor/365;
    dia = valor%365;
    mes = dia / 30;
    i = dia%30;

  printf("%d ano(s)\n", ano);
  printf("%d mes(es)\n", mes);
  printf("%d dia(s)", i);
  return 0;
}