// Calculates the volume of sphere 

#include <stdio.h>
#include <math.h>
int main() {
    float radius;
    double pi,volume;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    pi=3.14159;
    volume=(4.0/3.0) * pi * pow(radius,3);
    printf("The volume of a sphere with radius %.2f is %.2f cubic units",radius,volume);
    return 0;
}
