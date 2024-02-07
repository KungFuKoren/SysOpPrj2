#include <stdio.h>
#include "my_mat.h"

int main()
{
    int RUN_PROG = 1;

    int mat[MAT_SIZE][MAT_SIZE];

    int all_path_mat;

    while (RUN_PROG)
    {
        char chosen_option;
        printf("What action do you want to perform:\nA- Initialize a matrix\nB- Check if exists a path between two nodes\nC- Length of shortest path between two nodes\nD / EOF- Exit program\n");
        printf("Your choice: ");
        scanf("%c", &chosen_option);

        switch (chosen_option)
        {
        case 'A':
            matInit(mat);
            all_path_mat = allPaths(mat);
            break;
        case 'B':

        case 'D':
            RUN_PROG = 0;
            break;

        default:
            printf("Invalid Input!\n");
            break;
        }
        // printf("EXIT SWITCH\n");
        // for (int i = 0; i < MAT_SIZE; i++)
        // {
        //     for (int j = 0; j < MAT_SIZE; j++)
        //     {
        //         printf("%d ", mat[i][j]);
        //     }
        //     printf("\n");
        // }
    }

    return 0;
}