#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) { // Optimized loop condition
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to print prime numbers within a range
void findPrimesInRange(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Ensure num1 is less than or equal to num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
findPrimesInRange(num1, num2);
return 0;
