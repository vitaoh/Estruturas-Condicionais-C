#include <stdio.h>
int main () {
    int a, b, c; 

    printf("Escreva 3 numeros inteiros:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);

    int menor, medio, maior;

    if (a > b && a > c)
        maior = a;
    else if (b > c)
        maior = b;
    else
        maior = c;

    if (a < b && a < c)
        menor = a;
    else if (b < c)
        menor = b;
    else
        menor = c;

    if ((a < maior && a > menor) || (a > maior && a < menor))
        medio = a;
    else if ((b < maior && b > menor) || (b > maior && b < menor))
        medio = b;
    else
        medio = c;

    printf("%i, %i, %i\n", menor, medio, maior);
    printf("%i, %i, %i\n", maior, medio, menor);   
    
    return 0;
}
