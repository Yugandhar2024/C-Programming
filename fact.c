
#include <stdio.h>
void main()
{
    int n,count=0,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if(count==2)
    {
        printf("Given no %d is prime number",n);
        
    }
    else
    {
    printf("Not a prime number");
    }
}
