#include<Stdio.h>
int main()
{
    int calls;
    float bill;
    printf("Number of calls are: ");
    scanf("%d",&calls);
    if(calls<=50){
        bill=250;
    }
    else{
        bill=250+(calls-50)*1.5;
    }
    printf("%f",bill);
    return 0;
}