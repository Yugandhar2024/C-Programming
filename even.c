#include <stdio.h>

int main() {
    int n;
    printf("Enter the n value:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even number:%d",n);
    }
    else
    {
        printf("Odd number:%d",n);
    }
    return 0;
}
