#include <stdio.h>
#include <stdlib.h>


void func(){
    int num1;
    printf("Digite um numero para saber se eh par ou impar\n");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
    {
        printf("O numero eh par");
    }else{
        printf("O numero eh impar");
    }
    
}

int main()
{
    printf("Hello, World!\n");
    func();
    return 0;
}