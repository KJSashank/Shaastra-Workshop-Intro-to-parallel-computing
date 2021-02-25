#include<stdlib.h>
#include<stdio.h>
int A[N][N];
int B[N][N];
int C[N][N];
void matrixParallel()
{
  int i,j,k,sum;
  for (i = 0; i < N; i++) {
     for (j = 0; j < N; j++){ 
          sum = 0;
         #pragma omp parallel for shared (i,j) private(k) reduction(+:sum)
             for (k = 0; k < N; k++) {
                  sum = sum + A[i][k] * B[k][j];
              }
         C[i][j] = sum;
       }
  }
}
void main()
{
  int i,j;
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
        A[i][j] = i+j;
        B[i][j] = i+j;
    }
  }
  for(i=0; i < N; i++){
    for(j=0; j < N; j++){
        C[i][j] = 0;
    }
  }
  matrixParallel();
}
