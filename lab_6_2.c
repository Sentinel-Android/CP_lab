#include<Stdio.h>
int main()
{
    int n,i=2,j;
    scanf("%d",&n);
    while(i<=9){
        printf("Equivalent value of %d in base %d\n",n,i);
        int num=n;
        j=0;
        while(num!=0){
            printf("%dth digit: %d\t",j,num%i);
            num=num/i;
            j++;
        }
        i++;
        printf("\n--------------\n");
    }
    return 0;
}