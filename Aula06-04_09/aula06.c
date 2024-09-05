#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, max, mid, min;
    printf("Digite 3 numeros\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    min = n1;
    mid = n2;
    max = n3;

    if (min > mid)
    {
       mid = n1; 
       min = n2;
    }if (mid > max)
    {
        max = mid;
        mid = n3;
        if (min > mid)
        {
            mid = min;
            min = n3;
        }
        
    }
    printf("%d %d %d", min, mid, max);
    
    
}