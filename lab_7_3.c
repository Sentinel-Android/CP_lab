#include<stdio.h>
double f(int,int);
double exponent(int,int);
double fact(int);
int main()
{
    int x,n;
    printf("Enter x and n:\n");
    scanf("%d%d",&x,&n);
    printf("f(x) is : %lf",f(x,n));
    return 0;
}
double f(int x,int n){
    double result=0;
    for(int i=1;i<=n;i++){
        result+=(exponent(-1,i))*((exponent(x,i))/(fact(i)));
    }
    return result;
}
double exponent(int a,int b){
    int prod=1;
    for(int i=1;i<=b;i++){
        prod*=a;
    }
    return prod;
}
double fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}


