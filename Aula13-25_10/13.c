#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char string[20], pokemon[20];
    printf("Digite um texto de ate 20 caracteres\n");
    gets(string);

    printf("Digite um texto de ate 20 caracteres\n");
    gets(pokemon);

    int strcmp_result = strcmp(string, pokemon);
    if(strcmp_result == 0){
        printf("Iguaissssssssssssss");
    }else{
        printf("Deferentesssssssssss");
    }
    
}