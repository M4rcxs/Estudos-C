#include <stdio.h>
int main (void){
double media;
  scanf("%lf", &media);
if (media < 6){
  printf("Sua nota e D.");
}
else if (media >= 6 && media < 7.5){
  printf("Sua nota e C.");
}
else if (media >= 7.5 && media <9){
  printf("Sua nota e B.");
}
else {
  printf("Sua nota e A.");
}
return 0;
}