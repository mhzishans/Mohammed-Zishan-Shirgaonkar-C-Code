#include<stdio.h>
int main() {
int n;
int arr[100];
printf("Enter the number of elements (1-100): ");
scanf("%d", &n);
if (n <= 0 || n > 100) {
printf("Invalid number of elements.\n");
return 1;
}
printf("Enter %d integers:\n", n);
for (int i = 0; i < n; ++i) {
scanf("%d", &arr[i]);
}
int largest = arr[0];
for (int i = 1; i < n; ++i) {
if (arr[i] > largest) {
largest = arr[i];
}
}
printf("Largest element = %d\n", largest);
return 0;
}
