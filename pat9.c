// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("* \t");
        }
        printf("\n");
    }    

    return 0;
}
