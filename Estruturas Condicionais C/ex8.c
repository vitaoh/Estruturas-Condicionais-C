#include <stdio.h>
int main()
{
    int sexo;
    float altura, PesoIdeal;

    printf("\nVamos calcular o seu peso ideal\n");
    printf("Para isso digite o seu sexo [1] para Masculino e [2] para Feminino:\n");
    scanf("%i", &sexo);
    printf("Agora digite a sua altura:\n");
    scanf("%f", &altura);

    switch (sexo)
    {
    case 1:
        PesoIdeal = (72.7 * altura) - 58;
        break;
    case 2:
        PesoIdeal = (62.1 * altura) - 44.7;
        break;
    default: printf("Opcao invalida");
        break;
    }
    printf("O seu peso ideal e de %.2f Kg", PesoIdeal);

    return 0;
}