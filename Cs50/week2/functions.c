#include <stdio.h>
float mult(float x, float y);
int main(void)
{
    float w=mult(1.5,1.5);
    printf("%.2f", w);
}
float mult(float x, float y)
{
    float z= x*y;
    return z;
}