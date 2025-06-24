/* A jar has N no.of candies where N=10. The limit of candies is k where k=5.
Write a program that shows no.of candies left after selling the customer and the candies must be 5 in the jar everytime and if customer wants more than 5 it should show Invalid. */


#include <stdio.h>
int main()
{
    int N=10;
    int sale;
    int k=5;
    scanf("%d",&sale);
    if(sale<=k)
    {
        printf("no.of candies sold:%d\n",sale);
        printf("no.of candies left:%d",(N-sale));
    }
    else
    {
        printf("Invalid input\n");
        printf("No.of candies left: %d",N);
    }
    return 0;
}
