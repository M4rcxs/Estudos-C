#include <stdio.h>

int main(void){
    int v[100], i, temp, a;
    scanf("%d", &a);
    for(i = 0; i < a; i++){
        scanf("%d", &v[i]);
    }
    for(i = 0; i < a/2; i++){
        temp = v[i];
        v[i] = v[a - i - 1];
        v[a - i - 1] = temp;
    }
    for(i = 0; i < a; i++)
    printf("%d ", v[i]);
    return 0;
}