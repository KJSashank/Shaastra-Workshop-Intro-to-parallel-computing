#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#inlcude<omp.h>

#define NUM_THREADS 2
void main()
{    
    double a[10],b[10],c[10];
    int i;
    for(i=0;i<10;i++){
      a[i]=i;
      b[i]=i*i;
    }
  #pragma parallel for num_threads(NUM_THREADS)
  {
    for(i=id;i<10;i++){
      c[i]=a[i]+b[i];
    }
  }
}
