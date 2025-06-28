// Reads and prints array elements.

#include <stdio.h>
int main()
{
    int arr[10],n,i;
    printf("enter the size: ");
    scanf("%d",&n);
    printf("enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
