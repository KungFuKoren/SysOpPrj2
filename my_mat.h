#ifndef __my_mat_h__
#define __my_mat_h__

#define MAT_SIZE 10
#define TRUE 1

void matInit(int matrix[MAT_SIZE][MAT_SIZE]);
void allPaths(int srcMat[MAT_SIZE][MAT_SIZE], int destMat[MAT_SIZE][MAT_SIZE]);
void isPath(int matrix[MAT_SIZE][MAT_SIZE]);
void pathLeng(int matrix[MAT_SIZE][MAT_SIZE]);

#endif