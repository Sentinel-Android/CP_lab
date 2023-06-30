#include<stdio.h>
int i=2;
int prime(int n){
    if(n==1)
        return 0;
    if(n==i)
        return 1;
    if(n%i==0)
        return 0;
    i++;
    return(prime(n));
}
int result=1;
void lite(int number,int index){
    if(number==0){
        result=0;
        return;
    }
    int digit=number%10;
    if((index%2==0) && (digit%2!=0)){
        result=0;
        return;
    }
    i=2;
    if((index%2!=0) && (prime(digit)!=1)){
        result=0;
        return;
    }
    lite(number/10,index+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    lite(n,1);
    if(result)
        printf("Lite");
    else
        printf("Not Lite");
    return 0;
}