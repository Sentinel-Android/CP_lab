#include<Stdio.h>
#include<math.h>
int main()
{
    long int binaryval,decimalval=0,octalval,hexadecimalval;
    int rem,n=0;
    printf("Enter the binary number:");
    scanf("%ld",&binaryval);
    while(binaryval!=0){
        if(binaryval%10!=0 || binaryval%10!=1){
            rem=binaryval%10;
            decimalval+=rem*(pow(2,n));
            n+=1;
            binaryval/=10;
        }
        else{
            printf("Invalid Input");
            break;
        }
    }
    printf("Equivalent decimal value: %d, ",decimalval);
    printf("Equivalent octal value: %o",decimalval);
    printf("Equivalent hexadecimal value: %x",decimalval);
    return 0;
}