// Printing days using switch case

#include<stdio.h>
int main()
{
    int day;
    printf("Enter the number(1-7) for days: ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("\nMonday");
        break;
        case 2:
        printf("\nTuesday");
        break;
        case 3:
        printf("\nWednesday");
        break;
        case 4:
        printf("\nThursay");
        break;
        case 5:
        printf("\nFriday");
        break;
        case 6:
        printf("\nSaturday");
        break;
        case 7:
        printf("\nSunday");
        break;
        default:
        printf("\n Invalid day");
    }
    return 0;
}
