// Demonstrating basic pointer operations.

#include<stdio.h>
int main() 
{
    int a=10;
    int *p;
    p=&a;
    printf("Value: %d\n", a);
    printf("Address: %p\n", &a);
    printf("Value of p: %p\n", p);
    printf("Value pointed to by p: %d\n", *p);
    printf("Address of p: %p\n", &p);
    return 0;
}
