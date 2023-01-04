#include <stdio.h>
int main(void)
{
    char *s="Hi!";
    printf("%s\n", s);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n",*(s+2));
    int numbers[]={1,2,34,4,5,6,7};
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers+1));
}