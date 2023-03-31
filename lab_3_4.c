#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    a=5;b=2;c=10;d=1;e=3;f=4;g=5;h=2;i=-1;
    j=a+b*c/d-e+((++f)-g*h+1);
    printf("%d",j);
    return 0;
}