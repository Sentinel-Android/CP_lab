#include<stdio.h>
void drawsquare(int);
int main()
{
    int n;
    printf("Enter the size of square:\n");
    scanf("%d",&n);
    drawsquare(n);
    return 0;
}
void drawsquare(int n)
{
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int k=1;k<=n-i-1;k++){
                printf(" ");
            }
            printf("*");
            for(int p=1;p<=i-2;p++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}