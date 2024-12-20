
#include <stdio.h>
void main()
{
    int n,a=0,b=1,c,i;
    printf("Enter the n value:");
    scanf("%d",&n);
    printf("%d   %d\t",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        
    }
}
