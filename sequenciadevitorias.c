#include <stdio.h>

int main(void){ 
    int i,n1 = 0, n2 = 0;
    char result[1000];
    scanf("%s", result);
    for(i = 0; result[i] != '\0'; i++){
        n1++;
        if((result[i] == 'D')){
            n1 = 0;
        }
        if(n1 >= n2){
            n2 = n1;
        }
        if((result[i] != 'V') && (result[i] != 'D') && (result[i] != 'E')){
            printf("Invalido.");
            return 1;
        }
    }
    printf("%d", n2);
    return 0;
}