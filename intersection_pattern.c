/* Program that prints a hollow square pattern with diagonals using asterisks (*) and spaces that intersect.
The program takes the size of the square as input from the user and displays the pattern accordingly. */


#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if( i==1 || i==n || j==1|| j==n || i==j  || j==(n-i+1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
