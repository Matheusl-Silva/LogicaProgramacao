#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[50];

    printf("Digite um texto de 50 caracteres: ");
    gets(texto);

    printf("O texto digitado foi: %.4s", texto);
}