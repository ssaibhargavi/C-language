// Calculates the factorial of a given number, which is the product of all positive integers up to that number.

#include<stdio.h>
int main()
{
    int i,j,n,fact=1;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("factorial of %d is %d \n",n,fact);
}
  
