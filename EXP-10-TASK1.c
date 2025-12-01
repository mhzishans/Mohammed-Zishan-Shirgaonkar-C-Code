#include<stdio.h>
int main() {
int num1, num2, sum;
int *ptr1, *ptr2;
ptr1 = &num1;
ptr2 = &num2;
printf("Enter the first number: ");
scanf("%d", ptr1);
printf("Enter the second number: ");
scanf("%d", ptr2);
sum = *ptr1 + *ptr2;
printf("\nThe sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);
return 0;
}
