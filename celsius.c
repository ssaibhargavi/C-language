// Converting fahrenheit to celsius using functions

#include <stdio.h>
float fahrenheitToCelsius(float Fahrenheit){
    float Celsius=(Fahrenheit-32)*5/9;
    return Celsius;
}
int main() {
    float Fahrenheit;
    scanf("%f",&Fahrenheit);
    float result = fahrenheitToCelsius(Fahrenheit);
    printf("%.1f",result);
    return 0;
}
