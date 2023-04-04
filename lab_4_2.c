#include<stdio.h>
int main()
{
    double n1,n2,n3,max,min;
    printf("Enter the three numbers");
    scanf("%lf%lf%lf",&n1,&n2,&n3);
    if(n1>=n2 & n1>=n3){
        max=n1;
        if(n2>=n3){
            min=n3;
        }
        else{
            min=n2;
        }
    }
    else if(n2>=1 & n2>=n3){
        max=n2;
        if(n3>=n1){
            min=n1;
        }
        else{
            min=n3;
        }
    }
    else{
        max=n3;
        if(n1>=n2){
            min=n2;
        }
        else{
            min=n1;
        }
    }
    printf("Difference between Maximum and Minimum is: %.2f",max-min);
    return 0;
}