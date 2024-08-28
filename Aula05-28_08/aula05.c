#include <stdlib.h>
#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("Voce eh menor de idade");
    }else if (idade > 18 && idade < 65)
    {
        printf("Voce eh maior de idade");
    }
    else
    {
        printf("Parabens voce eh um velhote");
    }
    
    
}