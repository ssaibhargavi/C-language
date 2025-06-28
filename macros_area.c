// Calculates the area of a rectangle using macros for dimensions.

#include<stdio.h>
#define LENGTH 5
#define WIDTH 4
int main()
{
    int area = LENGTH * WIDTH;
    printf("Using macros for dimensions:\n");
    printf("Length = %d, Width = %d\n", LENGTH, WIDTH);
    printf("Area of rectangle is: %d\n", area);
    return 0;
}
