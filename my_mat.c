#include <stdio.h>
#include <limits.h>
#include "my_mat.h"

void matInit(int matrix[MAT_SIZE][MAT_SIZE])
{
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = 0; j < MAT_SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void allPaths(int srcMat[MAT_SIZE][MAT_SIZE], int destMat[MAT_SIZE][MAT_SIZE])
{
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = 0; j < MAT_SIZE; j++)
        {
            if (srcMat[i][j] == 0 && i != j)
            {
                destMat[i][j] = INT_MAX;
            }
            else
            {
                destMat[i][j] = srcMat[i][j];
            }
        }
    }

    for (int k = 0; k < MAT_SIZE; k++)
    {
        for (int i = 0; i < MAT_SIZE; i++)
        {
            for (int j = 0; j < MAT_SIZE; j++)
            {
                if (destMat[i][k] == INT_MAX || destMat[k][j] == INT_MAX)
                    continue;
                if (k != i && k != j && i != j)
                    destMat[i][j] = (destMat[i][j] < destMat[i][k] + destMat[k][j]) ? destMat[i][j] : destMat[i][k] + destMat[k][j];
            }
        }
    }
}

void isPath(int matrix[MAT_SIZE][MAT_SIZE])
{
    int src, dest;
    scanf("%d", &src);
    scanf("%d", &dest);
    if (matrix[src][dest] == INT_MAX || src == dest)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }
}

void pathLeng(int matrix[MAT_SIZE][MAT_SIZE])
{
    int src, dest;
    scanf("%d", &src);
    scanf("%d", &dest);
    if (matrix[src][dest] == INT_MAX || matrix[src][dest] == 0)
    {
        printf("%d\n", -1);
    }
    else
    {
        printf("%d\n", matrix[src][dest]);
    }
}
