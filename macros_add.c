// adding two numbers using macros

#include<stdio.h>
#define op(a,b)(a+b)
int main()
{
    int x,y;
    printf("enter x&y");
    scanf("%d %d",&x,&y);
    int add=op(x,y);
    printf("sum is:%d \n",add);
    return 0;
}
