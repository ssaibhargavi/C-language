// Function with no arguments and no return value.

#include<stdio.h>
void number()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("You have entered %d",num);
}
int main()
{
    number();
    return 0;
}
