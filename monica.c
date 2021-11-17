#include <stdio.h>

int main (void){
	int m=0, a=0, b=0, c=0;
	scanf("%d", &m);
	scanf("%d", &a);
	scanf("%d", &b);

	c = m - (a + b);

	printf("%d", c);
	return 0;

}