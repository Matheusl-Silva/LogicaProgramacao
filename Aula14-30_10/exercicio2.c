#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[50];

    printf("Digite qualquer coisa: \n");
    gets(string);

    printf("Os caracteres impares irao ser:");
    for(int i = 0; i < strlen(string); i++){
        if(i % 2 != 0){
            printf("%c", string[i]);
        }
    }
}