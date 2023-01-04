#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *list=malloc(3 * sizeof(int));
    list [0]=1;
    list [1]=2;
    list [2]=4;
    for(int i=0;i<3;i++)
    {
        printf("%i ", list[i]);
    }
    int *tmp= realloc(list,4* sizeof(int));//reallocates extra byte if available or 
    // moves the whole memory to a place where it is available.
    if (list==NULL)
    {
        return 1;
    }
    list[3]=7;
    for(int i=0;i<4;i++)
    {
        printf("%i ", list[i]);
    }
    free(list);//good manners to release memory after use














    // int *tmp= malloc(4 * sizeof(int));
    // if (tmp==NULL)
    // {
    //     return 1;
    // }
    // for (int i=0;i<4;i++)
    // {
    //     tmp[i]=list[i];
    // }
    // tmp[3]=6;//this is how we add new element to array allocated 3 bytes worth of memory
    // free(list); 
    // int list[3];
    // list[0]=1;
    // list[1]=2;
    // list[2]=4;
    // for(int i=0;i<3;i++)
    // {
    //     printf("%i ", list[i]);
    // }
    // printf("\n");
}