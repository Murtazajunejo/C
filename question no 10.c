#include <stdio.h>
 int main()
 { int n1, n2, temp; 
printf("Enter value of N1? ");
 scanf("%d", &n1); 
printf("Enter value of N2? ");
 scanf("%d", &n2);
 temp = n1; n1 = n2; n2 = temp;
 printf("Value of N1 is: %d\n", n1);
 printf("Value of N2 is: %d\n", n2);
 return 0; }