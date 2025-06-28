// Rotates an array to the right by a specified number of positions.

#include<stdio.h>
int main(){
    int arr[20],i,pos,n,temp,j=0;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter the Elements:\n");
    for(i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the no.of elements to be shifted:");
    scanf("%d",&pos);
    pos = pos%n;
    for(i = 0; i < pos; i++) {
        temp = arr[n-1];
        for(j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    printf("The Elements after Shifting are:\n");
    for(i =0; i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
