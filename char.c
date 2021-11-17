#include <stdio.h>
int main (){
  int v[10];
  int i=0, somatorio=0;
  //scanf("%s", v);
  //fgets(v, 15, stdin);
  for(i=0; i<10; i++){
    scanf("%d", &v[i]);
  }
  printf("//////////////\n");
  for(i=0; i<10; i++){
    somatorio = somatorio + v[i] * (i + 1);
  }
  printf("%d\n", somatorio);
  return 0;
}

