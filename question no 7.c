#include<stdio.h>

/*code*/
int main()
{
 int a,b;
 
a=8;
b=2;
int sum = a+b;
int sub = a-b;
int multi = a*b;
int division = a / b;
int mod = a%b;
int total = sum + sub + multi + division + mod ;
printf("Sum Of %d and %d is           %d\n", a,b,sum);
printf("Difference is %d and %d       %d\n", a,b,sub);
printf("Product of %d and %d is       %d\n", a,b,multi);
printf("Division of %d And %d is      %d\n", a,b,division);
printf("modulus Of %d and %d is       %d\n", a,b,mod);
printf("----------------------------------------");

printf("The Total is:                 %d", total);

return 0;
}