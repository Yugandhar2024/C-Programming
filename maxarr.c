#include<stdio.h>
int main()
{
    int a[10],i,n,max;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[i];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum element of array:%d",max);
}