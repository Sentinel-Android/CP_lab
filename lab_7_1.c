#include<Stdio.h>
int gcd(int,int);
int lcm(int,int);
int main()
{
    int x,y;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    printf("GCD of %d and %d is %d\n",x,y,gcd(x,y));
    printf("LCM of %d and %d is %d\n",x,y,lcm(x,y));
    return 0;
}
int gcd(int a,int b)
{
    int gcd;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}
// int lcm(int a,int b)
// {
//     int lcm=(a*b)/gcd(a,b);
//     return lcm;
// }
int lcm(int a,int b)
{
    int max=(a>=b)?a:b;
    while(1){
        if(max%a==0 && max%b==0){
            break;
        }
        max++;
    }
    int lcm=max;
    return lcm;
}