// Multiplication table

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
