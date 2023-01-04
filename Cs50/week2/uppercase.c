#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(void)
{
    char str[1000];
    printf("Put in your name\n");
    scanf("%s", str);
    printf("Before: \n%s\n", str);
    printf("After: \n");
    for (int i=0;i<strlen(str); i++)
    {
        if (islower(str[i]))
        {
            printf("%c", toupper(str[i]));
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
} 