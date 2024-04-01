#include <stdio.h>
int main () {

    int item, Qitem;
    float Tpagar;

    printf("\n1 |  Cachorro Quente  | R$ 4.00\n");
    printf("2 |     X-Salada      | R$ 4.50\n");
    printf("3 |     X-Bacon       | R$ 5.00\n");
    printf("4 |  Torrada simples  | R$ 2.00\n");
    printf("5 |    Refrigerante   | R$ 1.50\n");
    printf("\nDigite o item e a quantidade desejada:\n");
    scanf("%i", &item);
    scanf("%i", &Qitem);

    switch (item)
    {
    case 1:
        Tpagar = 4 * Qitem;
        break;
    case 2: 
        Tpagar = 4.5 * Qitem;
        break;
    case 3:
        Tpagar = 5 * Qitem;
        break;
    case 4:
        Tpagar = 2 * Qitem;
        break;
    case 5:
        Tpagar = 1.5 * Qitem;
        break;
    default: printf("\nItem invalido\n");
        break;
    }
    printf("\nO total a pagar: R$ %.2f\n", Tpagar);

    return 0; 
}