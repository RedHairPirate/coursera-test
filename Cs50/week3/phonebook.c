#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct
{
    string name;
    string number;
}
person;
int main(void)
{
    person people[2];
    people[0].name="Sam";
    people[0].number="1111111";
    people[1].name="Ram";
    people[1].number="232323232";
    for (int i=0;i<2;i++)
    {
        if(strcmp(people[i].name, "Ram")==0)
        {
            printf("found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}