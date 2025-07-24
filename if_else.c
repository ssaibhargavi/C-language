#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age<13){
        printf("Child");
    }
    else if(age>=13 && age<=19){
        printf("Teenager");
    }
    else if(age>=20 && age<=64){
        printf("Adult");
    }
    else{
        printf("Senior");
    }
    return 0;
}
