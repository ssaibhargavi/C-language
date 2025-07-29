// Calculating the sum of numbers from 1 to n using recursion
#include <stdio.h>
int sumToN(int n){
    if(n==1){
        return 1;
    }
    return n+sumToN(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumToN(n));
    return 0;
}
