#include<Stdio.h>
int main()
{
    int n,m=0;
    scanf("%d",&n);
    if(n==1){
        printf("Neither prime nor composite");
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                printf("Composite");
                m=1;
                break;
            }
        }
        if(m==0){
            printf("Prime");
        }
    }
    return 0;
}