#include <stdio.h>
#include <stdbool.h>
bool check(int a, int b, int c);
int main(void)
{
    int a;
    int b;
    int c;
    printf("please input all sides of the triangle\n");
    scanf("%i\n", &a);
    scanf("%i\n", &b);
    scanf("%i", &c);
    bool z=check( a, b, c);
    if(z==true)
    {
        printf("triangle exists\n");
    }
    else
    {
        printf("triangle does not exist\n");
    }
    printf("\n");
}
bool check(int a, int b, int c)
{
    if(a<=0 || b<=0 || c<=0)
    {
        return false;
    }
    if((a+b<=c) || (b+c<=a) || (a+c<=b))
    {
        return false;
    }
    return true;
}
