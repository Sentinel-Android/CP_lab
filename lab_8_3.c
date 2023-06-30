#include<stdio.h>
void factors(int n){
    static int i=1;
    if(n%i==0)
        printf("%d is a factor of %d\n",i,n);
    if(i==n)
        return;
    i++;
    factors(n);
}
int main()
{
    int n;
    scanf("%d",&n);
    factors(n);
    return 0;
}