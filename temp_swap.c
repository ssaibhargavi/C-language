// Swaps the values of two numbers using a temporary variable.

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Before swapping: %d,%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: %d,%d",a,b);
	return 0;
}
