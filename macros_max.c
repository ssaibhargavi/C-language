// Finding maximum using ternary operators in macros

#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int main()
{
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a,&b);
    int result=max(a,b);
    printf("Large number is %d",result);
    return 0;
}
