// Niven or Harshad number is a number that is divisible by the sum of its digits.
// Checks whether a given number is a Niven number or not

#include<stdio.h>
int main()
{
    int remainder,n,sum=0,temp=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        remainder=temp%10;
        sum+=remainder;
        temp=temp/10;
    }
    if(n%sum==0)
    {
        printf("%d is niven num",n);
    }
    else
    {
        printf("%d is not niven num",n);
    }
    return 0;
}
