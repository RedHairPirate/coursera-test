#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int number;
    struct node *next;
}
node;
int main(void)
{
    node *list= NULL;
    node *n=malloc(sizeof(node));
    if (n==NULL)
    {
        return 1;
    }
    n->number=1;//updating the list
    n->next=NULL;
    list =n;
    //add a number to list
    n=malloc(sizeof(node));
    if(n==NULL)
    {
        free(list);
        return 1;
    }
    n->number=2;
    n->next=NULL;
    //add a number
    n=malloc(sizeof(node));
    if(n==NULL)
    {
        free(list->next);//always go in reverse order to free the memory
        free(list);//dont touch an unlinked node so go reverse you have to touch list again 
        return 1;
    }
    // n=malloc(sizeof(node));
    n->number=3;
    n->next=NULL;
    list->next->next=n;
    for( node *tmp=list;tmp!=NULL;tmp=tmp->next)
    {
        printf("%i\n", tmp->number);
    }
    while(list!=NULL)
    {
        node *tmp=list->next;
        free(list);
    }
    return 0;
}