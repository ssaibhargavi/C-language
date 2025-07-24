// Printing even numbers less than 20 using the continue statement
#include <stdio.h>
int main() {
    for (int i = 1; i <= 20; i++) {
        if(i%2!=0)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
