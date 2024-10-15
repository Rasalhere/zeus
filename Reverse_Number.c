#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    // Get the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        number /= 10; // Remove the last digit from the original number
    }

    // Output the result
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
