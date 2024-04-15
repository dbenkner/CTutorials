#include <stdio.h>

int main(void) {
    int age;

    printf("Please enter your age: ");

    scanf("%i", &age);

    if (age < 18) {
        printf("You need to be 18 years old to continue\n");
    } else {
        printf("You are over 18 so you can continue!\n");
    }
}