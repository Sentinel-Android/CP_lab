#include<stdio.h>
int main()
{
    int octval,hexval;
    printf("Enter octal value\n");
    scanf("%o",&octval);
    printf("Enter hexadecimal value\n");
    scanf("%x",&hexval);
    printf("Addition: %d\n",octval+hexval);
    printf("Multiplication: %d\n",octval*hexval);
    printf("Subtraction: %d\n",octval-hexval);
    printf("Division: %d\n",octval/hexval);
    return 0;
}