// Online C compiler to run C program online
#include <stdio.h>
void main() {
int a ,b;
char op;
printf("enter a,b elements operations");
scanf("%d%d %c",&a,&b,&op);
switch(op)
{
case'+':printf("addition %d",a+b);
        break;
case'-':printf("substraction %d",a-b);
        break;
case'*':printf("multiplicatipn %d",a*b);
        break;
case'/':printf("divide %d",a/b);
        break;
case'%':printf("remainder %d",a%b);
        break;
default:printf("not an opreator");
       break;
}
}
