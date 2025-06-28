// Deletes an element from an array at a specified position.

#include<stdio.h>
int main(){
    int arr[20],i,j,pos,n;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter the Elements:\n");
    for(i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of element to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
        arr[i] = arr[i+1];
    }
    printf("Array after deletion: ");
    for(i =0; i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
