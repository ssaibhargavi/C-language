// Function with arguments and no return value

#include<stdio.h>
void number(int a)
{
    printf("Double of %d is %d",a,2*a);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    number(num);
    return 0;
}
