#include <stdio.h>

int main(void){
    int i, x, v = 1, p_a = 0;
    char a[32], b[32];
    scanf("%s", a);
    scanf("%s", b);  
    scanf("%d", &x);
    for(i = 0; a[i] != '\0'; i++){
        p_a++;
    }
    for(i = p_a - 1; b[i] != '\0'; i++){
        if(a[i] == b[i]);
        else{
            v = 0;
        }
    }
    printf("%d", v);
    return 0;
}