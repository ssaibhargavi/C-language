// Program that prints top border and diagonals forming the arrowhead and the right border forming the arrow shaft.

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
            if(i==1||j==n||j==(n-i+1))           
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
