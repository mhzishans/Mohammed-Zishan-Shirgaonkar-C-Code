#include<stdio.h>
// Function to calculate string length
int getStringLength(char str[]) {
int length = 0;
// Loop until the null terminator ('\0') is found
while (str[length] != '\0') {
length++;
}
return length;
}
int main() {
char myString[100];
printf("Enter a string: ");
// Read string using fgets (safer, includes newline)
fgets(myString, 100, stdin);
// --- Optional: Remove the trailing newline from fgets ---
int i = 0;
while (myString[i] != '\0') {
if (myString[i] == '\n') {
myString[i] = '\0'; // Replace newline with null terminator
break; // Exit the loop
}
i++;
} 
// Call the custom function
int len = getStringLength(myString);
printf("The length of the string is: %d\n", len);
return 0;
}
