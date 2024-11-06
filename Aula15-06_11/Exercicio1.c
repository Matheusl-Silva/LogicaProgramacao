#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[10];

    for (int i = 0; i < 10; i++){
        printf("Digite um valor: \n");
        scanf("%d", &valores[i]);
    }

    printf("Os valores em ordm inversa: \n");
    for (int i = 9; i >= 0; i--){
        printf("%d\n", valores[i]);
    }
}