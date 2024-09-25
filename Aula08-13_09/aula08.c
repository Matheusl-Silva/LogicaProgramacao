#include <stdio.h>
#include <stdlib.h>

int main()
{
   int input, t1 = 0, t2 = 1, next;

   printf("Digite um numero:\n");
   scanf("%d", &input);

   for (int i = 1; i <= input; i = t1)
   {
        printf("%d \n", t1);

        next = t1 + t2;
        t1 = t2;

        t2 = next;
   }
   
}