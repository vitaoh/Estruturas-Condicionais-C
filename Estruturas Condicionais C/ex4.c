#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Escreva um numero:\n");
    scanf("%i", &a);
    printf("Escreva um numero:\n");
    scanf("%i", &b);
    printf("Escreva um numero:\n");
    scanf("%i", &c);

    if (a == b && b == c)
    {
        printf("Os numeros sao iguais.\n");
    }

    int maior = a;
    int menor = a;

    if (b > maior)
    {
        maior = b;
    }
    if (b < menor)
    {
        menor = b;
    }
    if (c > maior)
    {
        maior = c;
    }
    if (c < menor)
    {
        menor = c;
    }

    printf("O menor numero é o %i\n", menor);
    printf("O maior numero é o %i\n", maior);

    return 0;
}