#include <stdio.h>
 int main() 
{ int number, digit, sum = 0; 
printf("Please enter five-digit number? "); 
scanf("%d", &number);
 printf("Separated from one another by three spaces: "); 
digit = number / 10000;
 printf("%d ", digit); sum += digit; digit = (number / 1000) % 10; 
printf("%d ", digit); sum += digit; 
digit = (number / 100) % 10; 
printf("%d ", digit); sum += digit; digit = (number / 10) % 10; 
printf("%d ", digit); sum += digit; digit = number % 10; 
printf("%d\n", digit);
 sum += digit; printf("Sum of five digits: %d\n", sum); 
return 0; }