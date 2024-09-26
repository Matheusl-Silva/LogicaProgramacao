#include <stdio.h>

int main()
{
    double volumeInicial, volumeFinal;
    int seg=0, min, horas;
    printf("Insira o volume de agua em litros:\n");
    scanf("%lf", &volumeInicial);

//    for(double i=volumeInicial; i>=1; i-=i/10){
//        volumeFinal=i;
//        seg+=30;
//        printf("%lf\n", i);
//    }

    double i = volumeInicial;
    while(i>=1){
        i-=i/10;
        volumeFinal=i;
        seg+=30;
        printf("%lf\n", i);
    }
    
    min=seg/60;
    seg%=60;
    horas=min/60;
    min%=60;

    printf("Volume inicial: %.2lfL\n", volumeInicial);
    printf("Volume final: %.2lfL\n", volumeFinal);
    printf("Tempo decorrido: %dh %dmin %dseg.\n", horas, min, seg);
    return 0;
}
