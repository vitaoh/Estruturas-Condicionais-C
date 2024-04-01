#include <stdio.h>
int main () 
{
    int a, b, c, d;

    printf ("Escreva 4 numeros inteiros em ordem:");
    scanf ("\n%i", &a);
    scanf ("\n%i", &b);
    scanf ("\n%i", &c);
    scanf ("\n%i", &d);

    if (( b > c) && ( d > a) && ( (c + d) > ( a + b ) ) && ( c > 0 ) && ( d > 0 )&& ( (a%2) == 0 ))
    {
        printf ("Valores Aceitos");
    }
    else {
        printf ("Valores nao Aceitos");
    }

    return 0;
}