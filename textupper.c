#include <stdio.h>

int main(void){
    int i;
    char text[100];
    gets (text);
    for(i = 0; text[i] != '\0'; i++) {
        if(i == 0 || text[i - 1] == ' ') {
            if(text[i] >= 'a' && text[i] <= 'z'){
                text[i] = (text[i] + 'A') - 'a';
            }
        } 
        else if(text[i] >= 'A' && text[i] <= 'Z') {
            text [i] = (text[i] - 'A') + 'a';
        } 
    }
   printf("%s", text);
   return 0;
}