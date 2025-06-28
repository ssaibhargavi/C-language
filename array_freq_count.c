// Counts the frequency of each element in an array

#include<stdio.h>
int main()
{
    int freq[100],a[100],n,i,j,count;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        if(freq[i]==-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    freq[j]=0;
                }
            }
            freq[i]=count;
        }
    }
    printf("Frequencies of numbers are:\n");
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("Frequency of %d=%d\n",a[i],freq[i]);
        }
    }
    return 0;
}
