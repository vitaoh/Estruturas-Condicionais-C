#include <stdio.h>
int main () {

    float a, b, c;

    printf("Escreva 3 valores que possam ou nao forma um triangulo:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a >= b + c || b >= c + a || c >= b + a)
    {
        printf("Essas medidas nao sao validas para formar um triangulo\n");
    }
    else
    if (a == b && b == c)
    {
        printf("Triangulo equilatero\n");
    }
    else
    if (a == b || b == c || a == c)
    {
        printf("Triangulo isoceles\n");
    }
    else {
    printf ("Triangulo escaleno\n");
    }

    return 0;
}