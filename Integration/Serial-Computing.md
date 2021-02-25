```
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

void main()
{    
    double x=0;
    double sum = 0.0;
    double num_steps;
    double step = 1.0/(double) num_steps;
    int i;
    for (i=0; i < num_steps; ++i) {
        x = (i+0.5)*step;
        sum = sum + 4.0/(1.0+x*x);
    }
    double pi = step * sum; 
    printf("%f",pi)
}
```
