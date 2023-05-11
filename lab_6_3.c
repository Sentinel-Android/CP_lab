#include<stdio.h>
int fact(int m)
{
    int fact=1;
    for(int i=1;i<=m;i++){
        fact*=i;
    }
    return(fact);
}
int main()
{
    int n;
    double fseries=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fseries+=(fact(n)/(fact(i)*fact(n-i)));
    }
    printf("fseries=%lf",fseries);
    return 0;
}