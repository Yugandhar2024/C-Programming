// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*\t",j);
        }
        printf("\n");
    }
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* \t");
        }
        printf("\n");
    }
    

    return 0;
}
