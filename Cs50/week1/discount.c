#include <stdio.h>
float discount(float price, int percentage);
int main(void)
{
    float price=100;
    int percent_off=12;
    float sale=discount(price,percent_off);
    printf("the discounted price is %.2f\n",sale);
}
float discount(float price, int percentage)
{
    return price*(100- percentage)/100;
}