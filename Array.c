#include <stdio.h>

#define SIZE 5

int main() {
    int array[SIZE] = {10, 20, 30, 40, 50}; // Initialize an array of size 5 with some values
    int i, sum = 0;

    printf("Elements in the array are: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array[i]); // Print elements of the array
    }

    for (i = 0; i < SIZE; i++) {
        sum += array[i]; // Calculate the sum of array elements
    }

    printf("\nSum of the elements is: %d\n", sum);

    return 0;
}

