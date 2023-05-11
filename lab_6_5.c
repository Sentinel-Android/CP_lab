#include<Stdio.h>
int main()
{
    int capacity ,weight,sum=0,i=1;
    scanf("%d",&capacity);
    while(1){
        printf("Enter a bag weight:");
        scanf("%d",&weight);
        sum+=weight;
        if(sum>capacity){
            break;
        }
        printf("bag-%d of weight %dkg added",i,weight);
        printf("Total weight in flight is %dkg\n\n",sum);
        i++;
    }
    return 0;
}