#include <stdio.h>
int main(void) {
    int n, i, j, v;
    char variavel[50];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s", variavel);
        if((variavel[0] >= 'A' && variavel[0] <= 'Z') || (variavel[0] >= 'a' && variavel[0] && 'z'));
        else if(variavel[0] == '_');
        else {
            printf("NAO VALIDO\n");
            continue;  
        } 
        v = 0;
        for(j = 1; variavel[j] != '\0'; j++) {
            if((variavel[j] >= 'A' && variavel[j] <= 'Z') || (variavel[j] >= 'a' && variavel[j] && 'z')){
                continue;
            }
            else if(variavel[j] == '_') {
                continue;
            }
            else if(variavel[j] >= '0' && variavel[j] <= '9') {
                continue;
            }
            else {
                printf("NAO VALIDO\n");
                v++;
                break;
            }
        }
        if(v == 0)
            printf("VALIDO\n");
    }
    return 0;
}