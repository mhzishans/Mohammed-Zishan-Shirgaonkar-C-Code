#include <stdio.h>

int main() {
    int num1, num2, sum = 0, i;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Ensure num1 is smaller than num2 for correct iteration
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Odd numbers between %d and %d are: ", num1, num2);

    // Iterate through the numbers and sum the odd ones
    for (i = num1; i <= num2; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            printf("%d ", i);
            sum += i; // Add the odd number to the sum
        }
    }

    printf("\nThe sum of odd numbers between %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
