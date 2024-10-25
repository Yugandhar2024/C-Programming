// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("Enter the a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
      if(a>c)
      {
          printf("A is largest number:%d",a);
      }
    }
    else if(b>c)
      {
          printf("B is largest number:%d",b);
      }
    else
      {
          printf("C is largest number:%d",c);
          
      }
    

    return 0;
}
