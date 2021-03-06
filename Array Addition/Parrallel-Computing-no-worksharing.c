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
      c[i]=0;
    }
  #pragma omp parallel num_threads(NUM_THREADS)
  {
    int id=omp_get_thread_num;
    for(int i=id;i<10;i=i+NUM_THREADS){
      c[i]=a[i]+b[i];
    }
  }
}
