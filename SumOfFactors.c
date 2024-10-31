#include <stdio.h>

int main() {
    int number, sum = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Calculate the sum of factors
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            sum += i; // Add the factor to the sum
        }
    }

    // Output the result
    printf("Sum of factors of %d: %d\n", number, sum);

    return 0;
}