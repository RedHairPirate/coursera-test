#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s=("Hi!");
    char *t=("Hi!");
    if(strcmp(s,t)==0)//it returns 0 value if its true 
    {
        printf("same\n");
    }
    else{
        printf("different\n");
    }
}
// you cannot compare two strings like you do ints in c because youre storing the strings in a memory location when u use char* command so it will always be different.