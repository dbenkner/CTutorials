#include <stdio.h>

int main(void) {
    char intial = 'D';
    int age;
    float bodyTemp = 98.6;

    double pi = 3.14159;

    printf("Please enter your age: ");

    scanf("%i", &age);

    printf("Your age is %i\n", age);

    const int LUCKY_NUM = 7;

    printf("My lucky number is: %i\n", LUCKY_NUM);
}