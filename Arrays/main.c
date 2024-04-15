#include <stdio.h>

int main(){
    int grades[] = {50, 65, 100, 67, 90};

    int array_size = sizeof(grades);

    printf("Size of array: %i bytes\n", array_size); // total byte size of array

    int length = sizeof(grades) / sizeof(grades[0]); // how to get the number of elements in array

    for(int i = 0; i < length; i++ ) {
        printf("Element at index%i: %i\n", i, grades[i]);
    }

    grades[4] = 95;

    for(int i = 0; i < length; i++){
        printf("Element at index %i: %i\n", i, grades[i]);
    }
}