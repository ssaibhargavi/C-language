// Prints a square matrix filled with numbers in a spiral pattern.

#include <stdio.h>
#include <string.h>
int main()
{
   int n;
   printf("enter the size: ");
   scanf("%d",&n);
   int spiral[n][n];
   int top=0,left=0,right=n-1,bottom=n-1,num=1;
   while(top<=bottom && left<=right)
   {
       for(int i=left;i<=right;i++)
       {
           spiral[top][i]=num++;
       }
       top++;
       for(int i=top;i<=bottom;i++)
       {
           spiral[i][right]=num++;
       }
       right--;
       for(int i=right;i>=left;i--)
       {
           spiral[bottom][i]=num++;
       }
       bottom--;
       for(int i=bottom;i>=top;i--)
       {
           spiral[i][left]=num++;
       }
       left++;
   }
   printf("spiral pattern result: \n");
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           printf("%4d",spiral[i][j]);
       }
       printf("\n");
   }
   return 0;
    
}
