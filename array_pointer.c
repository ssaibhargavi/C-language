// Accessing array elements using pointers.

#include <stdio.h>
int main()
{
    int a[]={10,20,30};
    int *p=a;
    printf("%d\n",*p);
    printf("%d\n",*p+1);
    printf("%d\n",*p+2);
    printf("%d\n",*p+3);
    return 0;
}
