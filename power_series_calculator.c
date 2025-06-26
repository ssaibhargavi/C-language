// Calculates the nth term of a series based on powers of 2 for odd n and powers of 3 for even n

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("%d\n",(int)pow(2,n/2));
    }
    else
    {
         printf("%d\n",(int)pow(3,(n/2)-1));
    }
    return 0;
}
