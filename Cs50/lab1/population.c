#include <stdio.h>
int main(void)
{
    int start_size, end_size, years;
    printf("Please input the start size of the population: ");
    scanf("%i", &start_size);
    printf("Please input the end size of the population: ");
    scanf("%i", &end_size);
    int population=start_size;
    for(years=0; population <= end_size; years++)
    {
        population += years * ( (population)/3 - (population)/4);
    }
    printf("Number of years take: %i\n", years);
}   