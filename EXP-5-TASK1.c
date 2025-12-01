#include <stdio.h>

// Function to calculate factorial iteratively
long long int factorial_iterative(int n) {
    long long int fact = 1;
    if (n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
        return -1; // Indicate an error
    }
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    long long int result = factorial_iterative(num);

    if (result != -1) {
        printf("Factorial of %d (iterative) = %lld\n", num, result);
    }
    return 0;
}
