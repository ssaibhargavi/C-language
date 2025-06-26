// Swaps the values of two numbers using multiplication and division operations.
// But if any one of the numbers is zero, resulting in division by zero errors.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Before swapping: %d,%d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After swapping: %d,%d",a,b);
	return 0;
}
