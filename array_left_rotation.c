// Rotates an array to the left by a specified number of positions.

#include <stdio.h>
int main()
{
    int a[100],n,key,i,j,temp;
    printf("enter a size:");
    scanf("%d",&n);
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    for(i=0;i<key;i++)
    {
        temp=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    printf("Array after %d left rotation: ",key);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
