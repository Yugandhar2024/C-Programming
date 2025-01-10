
#include <stdio.h>

int main() {
    int a[10],n,i;
    printf("Enter the size below 10 :");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Given elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
