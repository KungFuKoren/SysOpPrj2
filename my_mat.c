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
            destMat[i][j] = srcMat[i][j];
        }
    }

    for (int k = 0; k < MAT_SIZE; k++)
    {
        for (int i = 0; i < MAT_SIZE; i++)
        {
            for (int j = i; j < MAT_SIZE; j++)
            {
                if (i == j)
                {
                    destMat[i][j] = 0;
                }
                else if (destMat[i][j] == 0)
                {
                    destMat[i][j] = INT_MAX;
                }
                else
                {
                    destMat[i][j] = (destMat[i][j] < destMat[i][k] + destMat[k][j]) ? destMat[i][j] : destMat[i][k] + destMat[k][j];
                    destMat[j][i] = destMat[i][j];
                }
            }
        }
    }
}

void isPath(int matrix[MAT_SIZE][MAT_SIZE])
{
    int src, dest;
    scanf("%d", &src);
    scanf("%d", &dest);
    printf("IN isPath %d", matrix[src][dest]);
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
    if (matrix[src][dest] == INT_MAX)
    {
        printf("%d\n", -1);
    }
    else if (matrix[src][dest] != INT_MAX)
    {
        printf("%d\n", matrix[src][dest]);
    }
}
