#include <stdio.h>
int main (){
  int v[4];
  int i=0, menor;
  //float media = 0;
  //scanf("%s", v);
  //fgets(v, 15, stdin);
  for(i=0; i<4; i++){
    scanf("%d", &v[i]);
    if(menor >= v[i]){
        menor = v[i];
    }
  }
  printf("A menor nota e: %d\n", menor);
  return 0;
}