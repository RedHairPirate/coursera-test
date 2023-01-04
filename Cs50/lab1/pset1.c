#include <stdio.h>
int main(void)
{
    int height;
    printf("Please input the height of the pyramid ");
    scanf("%i", &height);
    if( height>0 && height <=8)
    {
        int h=height;//we initialize h separately so we dont alter the original value height.
        for(int j=0;j<height;j++)
        {
            for (int i=0; i<=h-1;i++)
            {
                printf(" ");//we print a blank space to first navigate the cursor to its required position before printing.
            }
            h--;// this value helps us reduce the spaces every loop and we dont change the original height value recieved.
            int count=0;
            do{
                printf("#");
                count++;
            }while(count<=j);//it will print first and then realize the value of count was higher and then stop which we require.
            printf("  ");
            count=0;
            do{
                printf("#");
                count++;
            }while(count<=j);
            printf("\n");
        }
    }
    else
    {
            printf("Please use a valid value between 0 and 8\n");
    }
}