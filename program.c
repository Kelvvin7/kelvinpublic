#include <stdio.h>

int main() {
    // Declare variables
    int number;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the square of the number
    int square = number * number;

    // Display the result
    printf("The square of %d is: %d\n", number, square);

    // Display a saying
    printf("Keep learning and coding!\n");

    return 0;
}

