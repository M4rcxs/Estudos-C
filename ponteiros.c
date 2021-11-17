#include <stdio.h>
#include <stdlib.h>
 
void AlterarVetor(int * vetor, int elementos);
 
int main() {
    int v[] = {5, 10, 15, 3, 10, 76, 5, 13, 33, 45};
    int * pt;
    int i;
    pt = v; //atribui o endereço do vetor
    AlterarVetor(v, 10); 
    for(i = 0; i < 10; i++) {
        printf("V[%d] = %d\r\n", i, *(pt + i));
    }
 
    return 0;
} 
void AlterarVetor(int * vetor, int elementos) {
    int i;
    
    if(vetor != NULL) {
       for(i = 0; i < elementos; i++) {
          *(vetor) = *(vetor) * 2; //ex: V[i] = V[i] * 2
          vetor++; //desloca o ponteiro para o próximo elemento
       } 
    }
}