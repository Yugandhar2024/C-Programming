// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

void main() {
    int sum=0,rem,n,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
        
    }
    if(sum==temp)
    printf("Given number %d is a Armstrong number",sum);
    else
    printf("Not a Armstrong number");
}
