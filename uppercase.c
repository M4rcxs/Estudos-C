#include <stdio.h>

int main (void) {
    int i;
    char v[100];
    scanf("%s", v);
    for(i = 1; v[i] != '\0';i++) {
        if(v[0] >= 'a' && v[0] <= 'z'){
            v[0] = (v[0] + 'A') - 'a';
        } 
        if(v[i] >= 'A' && v[i] <= 'Z'){
            v [i] = (v[i] - 'A') + 'a';
        }  
    }
    printf("%s", v);
    return 0;
}