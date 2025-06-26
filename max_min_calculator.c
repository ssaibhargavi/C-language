// Calculates maximum and minimum of two numbers without using if conditions or loops.#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    int max=(a+b-(a-b))/2;
    int min=(a+b+(a-b))/2;
    printf("Max: %d\n",max);
    printf("Min: %d",min);
    return 0;
}
