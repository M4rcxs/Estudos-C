#include <stdio.h>

int main(void){
    long long a = 600851475143, cont, i, r, maior = 1;
    
    for(cont = 1; cont < a; cont++ ) {
        if(a%cont == 0) {
            r = 0;
            for(i=2; i<cont; i++) {     
                if(cont%i == 0) {        
                    r++;
                    break;
                }
            }
            if(r != 1){
                maior = cont;
            }
            else{
                break;
            }
        }  
    }   
    printf("%lld ", maior);
    return 0;
}