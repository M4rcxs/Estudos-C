#include <stdio.h>

int main(void){
    int i, j, seq = 0, derrota = 0, seq2 = 0, seq3 = 0;
    char result[1000];
    scanf("%s", result);
    for(i = 0; result[i] != '\0'; i++){
        if((result[i] != 'D')){
            seq++;
        }else{
            derrota++;
            seq2++;
        }
        if(derrota == 1){
            if(seq > seq2){
                printf("seq: %d\n", seq);
            }else{
                printf("seq2: %d\n", seq2);
            }
        }
    }
    printf("%d", seq);
    return 0;
}
