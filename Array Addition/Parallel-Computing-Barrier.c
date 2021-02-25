                                
#include<stdlib.h>
#include<omp.h>
#include<stdio.h>

void main()
{
        int i;
        int a[100],b[100],c[100],d[50];
        for(i=0;i<100;i++){
                a[i]=i;
                b[i]=0;
                c[i]=0;
        }
        for(i=0;i<50;i++){
               d[i]=0;
        }
        #pragma omp parallel for num_threads(4)
        for(i=0;i<100;i++){
                c[i]=b[i]+a[i];
        }
        #pragma omp barrier
        for(i=0;i<50;i++){
                d[i]=a[2*i]+a[2*i+1];
        }
        for(i=0;i<50;i++){
                printf("%d \n",d[i]);
        } 
}
