#include <stdio.h>
int main(void) {
    double raio;
    double area;

    scanf("%lf", &raio);
    area = 3.14159 * raio * raio;

    printf("A=%.4lf", area);

    return 0;
}