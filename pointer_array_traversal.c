// Traverses an array using pointers.

#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p=a;
    for(int i=0;i<5;i++)
    {
        printf("Element %d : %d\n",i,*(p+i));
    }
    return 0;
}
