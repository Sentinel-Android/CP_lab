#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\nBefore exchange %d %d",a,b);
    a^=b;
    b^=a;
    a^=b;
    printf("\nAfter exchange %d %d",a,b);
    return 0;
}