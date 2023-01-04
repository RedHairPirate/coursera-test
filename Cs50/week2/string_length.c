#include <stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    printf("Put in your name\n");
    scanf("%s", str);
    int i=strlen(str); 
    printf("%s", str);
    // int i=0;
    // while (str[i]!='\0')
    // {
    //     i++;
    // }
    printf("%i\n", i);
}