// Printing the stars based on the rows and columns
#include <stdio.h>
int main() {
    int rows, columns;
    scanf("%d", &rows);
    scanf("%d", &columns);
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
          printf("*");
      }
      printf("\n");
    }
    return 0;
}
