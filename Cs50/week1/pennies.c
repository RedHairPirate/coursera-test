#include <stdio.h>
#include<math.h>
int main(void)
{
    float n;
    printf("Input the amount");
    scanf("%f", &n);
    int pennies= round(n*100); //this would give the rounded off proper output instead of 0.01 less
    printf("pennies= %i", pennies);
    printf("\n");
}