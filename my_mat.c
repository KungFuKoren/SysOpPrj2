#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "my_mat.h"

void matInit(int matrix[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; i++)
        {
            if(j == i){
                matrix[j][i] = 0;
            }
            if(j != i){
                scanf("%d" , matrix[i][j]);
                matrix[j][i] = matrix[i][j];
            }
        }   
    }
    allPaths(matrix);
}

void allPaths(int matrix[10][10]){

    for(int k = 0; k < 10 ; k++){
        for(int i = 0 ; i < 10 ; i++){
            for (int j = i; i < 10; i++)
            {
                if(i==j){
                    continue;
                }
                if(matrix[i][j] == 0){
                    matrix[i][j] = INT_MAX;
                }
                matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j]);
                matrix[j][i] = matrix[i][j];
            } 
        }
    }   
}

void isPath(int matrix[10][10]){
    int src, dest;
    scanf("%d" , &src);
    scanf("%d", &dest);
    if(matrix[src][dest] == INT_MAX){
         printf("%s" , "false\n");
    }
         printf("%s" , "true\n");
}

int pathLeng(int matrix[10][10]){
    int src, dest;
    scanf("%d" , &src);
    scanf("%d", &dest);
    if(matrix[src][dest] == INT_MAX){
        printf("%d" , -1);
    }
    else if (matrix[src][dest] != INT_MAX)
    {
        printf("%d" , matrix[src][dest]);
    }
}

int terminate(){
    exit(0);
}

// PART 2






