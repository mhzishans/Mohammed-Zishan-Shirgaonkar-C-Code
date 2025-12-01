#include<stdio.h>
void counterFunction() { 
static int count = 0; 
count++; 
printf("Function called %d time(s).\n", count); 
} i
nt main() { 
counterFunction(); 
counterFunction(); 
counterFunction(); 
counterFunction(); 
return 0; }
