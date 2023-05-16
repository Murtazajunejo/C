#include <stdio.h>
 int main()
 { int number, reversed_number = 0;
printf("Enter any number? "); 
scanf("%d", &number);
 while (number != 0)
 { reversed_number = reversed_number * 10 + number % 10;
 number /= 10; 
} 
printf("Reverse of %d is: %d\n", number, reversed_number);
 return 0;
 }