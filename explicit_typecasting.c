// Converting double to int using explicit typecasting

#include <stdio.h>
int main() {
    double temperature=98.6;
    int whole_part=(int) temperature;
    printf("Original temperature: %.1f\n", temperature);
    printf("Whole part: %d",whole_part);
    return 0;
}
