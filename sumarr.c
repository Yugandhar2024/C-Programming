#include<stdio.h>
int main()
{
    int a[10],n,i,s=0;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("Sum of the elements:%d",s);
}
