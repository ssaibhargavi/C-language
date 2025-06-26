// Strong number is a number that is equal to the sum of the factorials of its digits.

#include<stdio.h>
int main()
{
    int digit,fact,num,sum=0,temp=0;
    printf("enter a number: ");
    scanf("%d", &num);
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        fact=1;
        for(int i=1;i<=digit;i++)
        {
        fact*=i;
        }
     sum+=fact;
     temp/=10;
    }
    if(num==sum)
    {
        printf("%d is a strong", num);
    }
    else
    {
        printf("%d is not strong", num);
    }
    return 0;
}
