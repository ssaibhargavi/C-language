// Inserts an element into an array at a specified position.

#include<stdio.h>
int main()
{
    int a[100],pos,n,value,i;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to insert:");
    scanf("%d",&pos);
    printf("Enter the value of the position");
    scanf("%d",&value);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=value;
    n++;
    printf("After insertion:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
