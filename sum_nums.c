// Program that sum the n numbers 

#include <stdio.h>
int main() {
    int n,num;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
    return 0;
}
