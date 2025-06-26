// Super factorial is the product of the factorials of all positive integers up to that number.
// Calculates the super factorial of a given number 

#include<stdio.h>
int main()
{
    int i,j,n,sfact=1,fact;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact*=j;
        }
        sfact*=fact;
    }
    printf("superfact of %d is %d \n",n,sfact);
}
  
