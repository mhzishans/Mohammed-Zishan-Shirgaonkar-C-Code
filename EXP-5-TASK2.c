#include <stdio.h>

// Function to calculate factorial recursively
long long int factorial_recursive(int n) {
    if (n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
        return -1; // Indicate an error
    }
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial_recursive(n - 1); // Recursive step
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    long long int result = factorial_recursive(num);

    if (result != -1) {
        printf("Factorial of %d (recursive) = %lld\n", num, result);
    }
    return 0;
}
