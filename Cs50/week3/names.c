#include <stdio.h>
#include <string.h>
#include <cs50.h>
int main(void)
{
    string names[]={"Rakesh","mia","Sam","Seth","Ram","Dan"};
    for(int i=0; i<6;i++)
    {
        if(strcmp(names[i], "mia")==0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}   