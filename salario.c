#include <stdio.h>
double v1, c, total;
char nome[30];
int main () {
  scanf("%s", &nome);
  scanf("%lf", &v1);
  scanf("%lf", &c);
  total = v1 + (c * 0.15);
  printf("TOTAL = R$ %.2lf", total);
  return 0;
}