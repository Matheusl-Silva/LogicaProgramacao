#include <stdlib.h>
#include <stdio.h>

int main()
{
    int mat[2][2];

    for(int l = 0; l < 2; l++){
        for(int col = 0; col < 2; col++){
            mat[l][col] = l * col;
        }
    }
}