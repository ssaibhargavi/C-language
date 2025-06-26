// Function with arguments and return value.

#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    printf("Enter x&y values: ");
    scanf("%d\n %d",&x,&y);
    int result=add(x,y);
    printf("Sum is %d",result);
    return 0;
}
