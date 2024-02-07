#include <stdio.h>
#include <limits.h>
#include "my_mat.h"

void matInit(int matrix[MAT_SIZE][MAT_SIZE])
{
    printf("IN matInit\n");
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = i; j < MAT_SIZE; j++)
        {
            if (j == i)
            {
                matrix[j][i] = 0;
                continue;
            }
            scanf("%d", &matrix[i][j]); // Error
            matrix[j][i] = matrix[i][j];
        }
    }
}

int **allPaths(int mat[MAT_SIZE][MAT_SIZE])
{
    int tempMat[MAT_SIZE][MAT_SIZE];
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = 0; j < MAT_SIZE; j++)
        {
            tempMat[i][j] = mat[i][j];
        }
    }

    for (int k = 0; k < MAT_SIZE; k++)
    {
        for (int i = 0; i < MAT_SIZE; i++)
        {
            for (int j = i; i < MAT_SIZE; i++)
            {
                if (i == j)
                {
                    continue;
                }
                if (tempMat[i][j] == 0)
                {
                    tempMat[i][j] = INT_MAX;
                }
                tempMat[i][j] = min(tempMat[i][j], tempMat[i][k] + tempMat[k][j]); // Error
                tempMat[j][i] = tempMat[i][j];
            }
        }
    }
    return tempMat;
}

void isPath(int matrix[MAT_SIZE][MAT_SIZE])
{
    int tempMat ** = allPaths(matrix);
    int src, dest;
    scanf("%d", &src);
    scanf("%d", &dest);
    if (matrix[src][dest] == INT_MAX)
    {
        return printf("%s", "false\n");
    }
    printf("%s", "true\n");
}

int pathLeng(int matrix[MAT_SIZE][MAT_SIZE])
{
    int src, dest;
    scanf("%d", &src);
    scanf("%d", &dest);
    if (matrix[src][dest] == INT_MAX)
    {
        printf("%d", -1);
    }
    else if (matrix[src][dest] != INT_MAX)
    {
        printf("%d", matrix[src][dest]);
    }
}
