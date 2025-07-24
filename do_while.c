// do-while loop
#include <stdio.h>
int main() {
    int sum = 0;
    int number = 1;
    do
    {
        sum+=number;
        printf("Sum is: %d\n",sum);
        number+=2;
        printf("Num is: %d\n",number);
    }while(number<=50);
    printf("Final Sum: %d\n", sum);
    return 0;
}
