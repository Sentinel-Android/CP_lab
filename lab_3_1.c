#include<stdio.h>
int main()
{
    float diameter,priceperinch,bill;
    scanf("%f%f",&diameter,&priceperinch);
    bill=(3.14*diameter*diameter/4)*priceperinch;
    printf("%f",bill);
    return 0;
}