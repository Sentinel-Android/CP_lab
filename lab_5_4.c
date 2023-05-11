#include<Stdio.h>
int main()
{
    int num,revnum=0;
    scanf("%d",&num);
    int num1=num;
    while(num!=0){
        revnum=(revnum*10)+(num%10);
        num/=10;
    }
    num=num1;
    (num==revnum)?printf("Palindrome"):printf("Not Palindrome");
    return 0;
}