#ifndef __my_mat_h__
#define __my_mat_h__

// Graph Library
#define MAT_SIZE 10
#define TRUE 1

void matInit(int matrix[MAT_SIZE][MAT_SIZE]);
void allPaths(int srcMat[MAT_SIZE][MAT_SIZE], int destMat[MAT_SIZE][MAT_SIZE]);
void isPath(int matrix[MAT_SIZE][MAT_SIZE]);
void pathLeng(int matrix[MAT_SIZE][MAT_SIZE]);

// Knapsack Library
#define KNAPSACK_MAX_WEIGHT 20
#define KNSAPSACK_MAX_CAPACITY 5

int knapSack(int weights[], int values[], int selected_bool[]);

#endif