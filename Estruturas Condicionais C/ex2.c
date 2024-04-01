#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double delta, x1, x2;

    printf("Escreva 3 valores:");

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b*b) - (4*a*c);

    if ( delta < 0 || delta == 0)
    {
        printf ("Impossivel Calcular\n");
    } else 
    {
        x1 = ((-b + sqrt(delta))/2*a);
        x2 = ((-b - sqrt(delta))/2*a);
        printf ("As raizes sao %.2lf e %.2lf\n", x1, x2);
    }
    

return 0;

}