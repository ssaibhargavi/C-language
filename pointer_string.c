// Prints a string using pointers.

#include<stdio.h>
int main()
{
    char str[]="String";
    char *p=str;
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    return 0;
}
