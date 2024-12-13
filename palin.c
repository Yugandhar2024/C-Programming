// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int rev=0,rem,n,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
    if(rev==temp)
    printf("Given number is a Palindrome number");
    else
    printf("Not a palindrome number");
}
