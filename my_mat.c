#include <stdio.h>
#include <limits.h>
#include "my_mat.h"

void matInit(int matrix[MAT_SIZE][MAT_SIZE])
{
    printf("IN matInit");
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = i; j < MAT_SIZE; i++)
        {
            if (j == i)
            {
                matrix[j][i] = 0;
                continue;
            }
            scanf("%d", matrix[i][j]); // Error
            matrix[j][i] = matrix[i][j];
        }
    }
}

// void allPaths(int matrix[MAT_SIZE][MAT_SIZE])
// {

//     for (int k = 0; k < MAT_SIZE; k++)
//     {
//         for (int i = 0; i < MAT_SIZE; i++)
//         {
//             for (int j = i; i < MAT_SIZE; i++)
//             {
//                 if (i == j)
//                 {
//                     continue;
//                 }
//                 if (matrix[i][j] == 0)
//                 {
//                     matrix[i][j] = INT_MAX;
//                 }
//                 matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]); // Error
//                 matrix[j][i] = matrix[i][j];
//             }
//         }
//     }
// }

// void isPath(int matrix[MAT_SIZE][MAT_SIZE])
// {
//     int src, dest;
//     scanf("%d", &src);
//     scanf("%d", &dest);
//     if (matrix[src][dest] == INT_MAX)
//     {
//         return printf("%s", "false\n");
//     }
//     printf("%s", "true\n");
// }

// int pathLeng(int matrix[MAT_SIZE][MAT_SIZE])
// {
//     int src, dest;
//     scanf("%d", &src);
//     scanf("%d", &dest);
//     if (matrix[src][dest] == INT_MAX)
//     {
//         printf("%d", -1);
//     }
//     else if (matrix[src][dest] != INT_MAX)
//     {
//         printf("%d", matrix[src][dest]);
//     }
// }

// PART 2
