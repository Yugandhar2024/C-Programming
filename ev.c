// Online C compiler to run C program online
#include <stdio.h>

int main()
{ int a,tem;
printf("Enter the number :");
scanf("%d",&a);
tem=a%2;
switch(tem)
{
    case 0:printf("Even Number");
           break;
    case 1:printf("Odd Number");
           break;
    default:printf("Invalid Input");
            break;
}

    return 0;
}
