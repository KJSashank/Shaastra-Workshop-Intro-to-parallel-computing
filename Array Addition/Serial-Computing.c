#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

void main()
{    
    double a[10],b[10],c[10];
    int i;
    for(i=0;i<10;i++){
      a[i]=i;
      b[i]=i*i;
    }
    for(i=0;i<10;i++){
      c[i]=a[i]+b[i];
    }
}
