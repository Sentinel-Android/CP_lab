#include<stdio.h>
int main()
{
    float bill;
    int calls;
    printf("Number of calls are: ");
    scanf("%d",&calls);
    if(calls<=50){
        bill=50;
    }
    else{
        bill=250+(calls-50)*1.5;
    }
    printf("%f",bill);
    return 0;
}