#include<stdio.h>
#include<math.h>
void main()
{
     int a,b,c,d;
     float r1,r2;
     printf("Enter a,b and c values:");
     scanf("%d%d%d",&a,&b,&c);
     d=(b*b)-(4*a*c);
     if(d>0)
     {
         r1=-b+sqrt((d)/(2*a));
         r2=-b-sqrt((d)/(2*a));
         printf("Root are real and distint");
         printf("\n Root are : %.2f%.2f",r1,r2);
     }
     else if(d<0)
     {
         printf("Root are real and imaginary");
         
     }
     else
     {
         r1=r2=-b/(2*a);
         printf("Root are real and equal");
         printf("\n Root are: %.2f%.2f",r1,r2);
     }
}
