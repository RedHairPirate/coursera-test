#include <stdio.h>
void swap(int *a, int *b);
int main(void)
{
    int x=1;
    int y=2;
    printf("Before swap x is %i and y is %i\n", x,y);
    swap(&x, &y);
    printf("After swap: x is %i and y is %i\n", x,y);
}
void swap(int *a, int*b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
//if you had used normal integers it wouldnt have copied because its only altering the values in the functions which go away after the function is called 
//so it wouldnt make a change to the original x and y values.
