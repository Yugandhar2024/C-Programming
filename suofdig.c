// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int sum=0,rem,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of the digits of the given number:%d",sum);
}
