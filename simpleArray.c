#include <stdio.h>
#include "simpleArray.h"
#define SIZE_M 4

void scanIntArray(int *A, unsigned n)
{
    for(unsigned i = 0; i < n; i++)
        scanf("%i", &A[i]);
}

void printIntArray(const int *A, unsigned n)
{
    printf("[");
    for(unsigned i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        if(i < (n - 1))
            printf(", ");
    }
    printf("]");
}

int sumIntArray(const int *A, unsigned n)
{
    int soma = 0;

    for(unsigned i = 0; i < n; i++)
        soma += A[i];
    return soma;
}

void scanIntMat(int **M, unsigned m, unsigned n)
{
    for(unsigned i = 0; i < m; i++)
        for(unsigned j = 0; j < n; j++)
            scanf("%d", &M[i][j]); 
}        

void printIntMat(int **M, unsigned m, unsigned n)
{
    for(unsigned i = 0; i < m; i++)
    {        
        printf("| ");        
        for(unsigned j = 0; j < n; j++)
        {        
            printf("%d", M[i][j]);
            if(j < (n - 1))
                printf("\t");
        }
        printf(" |\n");    
    }
}


