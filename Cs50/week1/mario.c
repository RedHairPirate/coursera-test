#include <stdio.h>
int main(void)
{
    int n;
    do {
        printf("Input the dimension of the square: ");
        scanf("%d", &n);
    }   
    while(n<1);
    for (int i=0;i<n;i++)
    {
        printf("\n");
        for (int j=0;j<n;j++)
        {
             printf("#");
        }
    }
    printf("\n");
}