#include<Stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d^%d - %d^%d is %f",x,y,y,x,(pow(x,y)-pow(y,x)));
    return 0;
}