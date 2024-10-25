#include <stdio.h>

int main() {
    int n;
    printf("Enter the n value:");
    scanf("%d",&n);
    if(n>0)
   {
    printf("Positive Number");
   }
   else if(n==0)
   {
       printf("Zero");
   }
   else
   {
      printf("Negative Number");
   }
    return 0;
}
