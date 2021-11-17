#include <stdio.h>

int main (void) {
  int h, m, s;
  scanf("%d", &s);
    
    
    m = s/60;
    h = m/60;
    s = s%3600;
    m = s/60;
    s = s%60;


  printf("%d:%d:%d", h, m, s);
  
  return 0;
}

