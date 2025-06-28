// Lexicographical alphabet combination 
// Generates and prints various patterns using alphabets A to E, including single characters, pairs, and triplets.

#include<stdio.h>
int main()
{
   char ch;
   int i,j,k;
   for(ch='A';ch<='E';ch++)
   {
       printf("%c \n",ch);
   }
   for(i='A';i<='E';i++)
   {
       for(j='A';j<='E';j++)
       {
           printf("%c%c \n",i,j);
       }
   }
   for(i='A';i<='E';i++)
   {
       for(j='A';j<='E';j++)
       {
           for(k='A';k<='E';k++)
           {
                printf("%c%c%c \n",i,j,k);
           }
       }
   }
    return 0;
}
