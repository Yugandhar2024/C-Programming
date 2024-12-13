// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int rev=0,rem,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse number of the given number:%d",rev);
}
