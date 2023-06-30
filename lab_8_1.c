#include<stdio.h>
int gcd(int,int,int);
int lcm(int,int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int i=x;
    int max=(x>=y)?x:y;
    printf("GCD of %d and %d is %d\n",x,y,gcd(x,y,i));
    printf("LCM of %d and %d is %d\n",x,y,lcm(x,y,max));
    return 0;
}
int gcd(int a,int b,int i){
    if(a%i==0 && b%i==0){
        return i;
    }
    gcd(a,b,i-1);
}
int lcm(int a,int b,int max){
    if(max%a==0 && max%b==0){
        return max;
    }
    lcm(a,b,max+1);
}