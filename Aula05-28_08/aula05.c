#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;

    printf("Digite tres valores para resolver bhaskara: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b,2) - 4 * a * c;

    if(delta < 0)
    {
        printf("A equacao esta errada bobao");
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("x1 = %lf\n", x1);
    }
        if (delta > 0)
        {
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x2 = %lf\n", x2);
        }
        

    
}