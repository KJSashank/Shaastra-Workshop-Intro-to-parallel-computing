```
#include<stdlib.h>
#include<stdio.h>
#include<omp.h>
#define NUM_THREADS 2
void main()
{
    omp_set_num_threads(NUM_THREADS);
    double x=0;
    double sum = 0.0;
    double step = 1.0/(double) num_steps;
    double aux,pi;
    int i,num_steps=100;
#pragma omp parallel private(i,x,aux) shared(sum) 
   {
#pragma omp for
      for (i=0; i<num_steps; i=i+1){
         x=(i+0.5)*step;
         aux=4.0/(1.0+x*x);
#pragma omp critical
         sum = sum + aux;
      }
   }
   pi=step*sum;
   printf("%f", pi);
}
```
