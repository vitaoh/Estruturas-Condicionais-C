#include <stdio.h>
int main ()
{
    char nomeM[20], nomeD[20];
    float lista, pratica, prova;

    printf ("Digite seu nome:\n");
    scanf("%s", nomeM);
    printf ("Digite sua disciplina:\n");
    scanf("%s", nomeD);
    printf ("Agora digite suas notas na lista, pratica e prova em ordem:\n");
    scanf("%f%f%f", &lista, &pratica, &prova);

    if ((lista/4 + pratica/4 + prova/2) >= 7)
    {
        printf("A %s foi aprova em %s", nomeM, nomeD);
    }

    else printf("A %s foi reprovada em %s", nomeM, nomeD);
    
    
    return 0;
}