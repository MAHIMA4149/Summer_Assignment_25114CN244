#include <stdio.h>
int main(){
   int n;
   printf("Enter a number: ");
   scanf("%d",&n); 
   int product=1;
   for (int i=n; i>=1; i--)
   {
    product *= i;}
printf("The factorial is %d", product);
return 0;

   
}