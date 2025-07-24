// Printing the grade using switch case

#include <stdio.h>
int main() {
    int grade;
  printf("Enter the grade: ");
    scanf("%d", &grade);
    grade=grade/10;
    switch (grade){
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
    }
    return 0;
}
