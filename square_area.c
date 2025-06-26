// Calculates and prints the area of a square.

#include<stdio.h>
int calc(int num)
{
    printf("Area of a square with %d side is %d",num,num*num);
}
int input()
{
    int x;
    printf("enter value:");
    scanf("%d",&x);
    calc(x);
}
int main()
{
    input();
    return 0;
}
