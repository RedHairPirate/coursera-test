#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *x=malloc(4);//malloc is memory allocation makes a memory big enough to fit 3 integers
    int *y;
    *y=13;
    *x=12;
    printf("%i", *x);
    printf("%i", *y);

    
}