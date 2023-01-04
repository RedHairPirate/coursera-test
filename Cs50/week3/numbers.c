#include <stdio.h>
int main(void)
{
    int numbers[]={1,2,3,4,5,6,9,8,0};
    for (int i=0; i<9; i++)
    {
        if(numbers[i]==7)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}