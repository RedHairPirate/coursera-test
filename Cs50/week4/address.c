#include <stdio.h>
int main (void)
{
    int n=50;
    int *p= &n;//pointer of n's location 0x means hexadecimal memory
    printf("%p\n", &n);
    printf("%i\n", *p);//goes to the pointer location and prints whatever is there
}
    
