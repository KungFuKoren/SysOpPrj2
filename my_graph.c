#include <stdio.h>
#include "my_mat.h"

int main()
{
    int mat[MAT_SIZE][MAT_SIZE];

    int all_path_mat[MAT_SIZE][MAT_SIZE];

    char chosen_option = 1;

    while (chosen_option != 'D')
    {
        scanf(" %c", &chosen_option);

        switch (chosen_option)
        {
        case 'A':
            matInit(mat);
            allPaths(mat, all_path_mat);
            break;
        case 'B':
            isPath(all_path_mat);
            break;
        case 'C':
            pathLeng(all_path_mat);
            break;
        case 'D':
            break;

        default:
            printf("Invalid Input!\n");
            break;
        }
    }

    return 0;
}