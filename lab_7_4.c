#include<stdio.h>
int min(int,int);
int main()
{
    int a,b,c,d,e;
    printf("Enter five values:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int small=min(a,b);
    small=min(small,c);
    small=min(small,d);
    small=min(small,e);
    printf("Mimimum value:%d",small);
    return 0;
}
int min(int a,int b)
{
    return(a<b?a:b);
}