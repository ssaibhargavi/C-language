// Converting an integer and float into double by implicit typecasting

#include <stdio.h>
int main() {
    int smallNumber=42;
    float mediumNumber=123.456;
    double largeNumber;
    largeNumber=smallNumber;
    printf("Small to large: %.1f\n",largeNumber);
    largeNumber=mediumNumber;
    printf("Medium to large: %.1f\n",largeNumber);
    return 0;
}
