// Function with no arguments and return value

#include<stdio.h>
int A()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	return x;
}
int main()
{
	int num=A();
	printf("Your value stored in function is %d",num);
	return 0;
}
