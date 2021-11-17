#include <stdio.h>
double n1, n2, m;
int main () {
  scanf("%lf", &n1);
  scanf("%lf", &n2);
  m = ((3.5 * n1) + (7.5 * n2))/11;
  printf("MEDIA = %.5lf", m);
  return 0;
}