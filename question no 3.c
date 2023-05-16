#include <stdio.h>

int main() {
    int num1, num2, sum, product;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;

    printf("---------------------------------------\n");
    printf("Sum of %d and %d is : %d\n", num1, num2, sum);
    printf("Product of %d and %d is : %d\n", num1, num2, product);

    return 0;
}