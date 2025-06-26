// Prints a word in reverse order.

#include<stdio.h>
int main()
{
    char word[10];
    int i,len=0;
    printf("Enter a word: ");
    scanf("%s",word);
    while(word[len]!='\0')
    {
        len++;
    }
    printf("Reversed word:\n ");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",word[i]);
    }
    printf("\n");
    return 0;
}
