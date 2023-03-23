#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int ans=num%10;
    num/=10;
    ans+=num%10;
    num/=10;
    ans+=num%10;
    printf("%d",ans);
    // int n;
    // int sum=0;
    // scanf("%d",&n);
    // while(n!=0){
    //     sum+=n%10;
    //     n/=10;
    // }
    // printf("%d",sum);
    return 0;
}
   