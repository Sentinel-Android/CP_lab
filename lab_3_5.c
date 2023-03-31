#include<stdio.h>
int main()
{
    float w;
    int kg,gm;
    scanf("%f",&w);
    kg=(int)w;
    gm=(w-kg)*1000;
    printf("%d kg %d gm",kg,gm);
    return 0;
}