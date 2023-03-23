#include<stdio.h>
int main()
{
    int num,ans=0;
    scanf("%d",&num);
    ans=(ans*10)+(num%10);
    num/=10;
    ans=(ans*10)+(num%10);
    num/=10;
    ans=(ans*10)+(num%10);
    num/=10;
    ans=(ans*10)+(num%10);
    printf("%d",ans);
    // int n,m=0;
    // scanf("%d",&n);
    // while(n!=0){
    //     m=(m*10)+(n%10);
    //     n/=10;
    // }
    // m*=10;
    // printf("%d",m);
    return 0;
}