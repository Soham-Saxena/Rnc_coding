#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter numbers (a, b): ");
    scanf("%d, %d", &a, &b);

    printf("Sum of the given numbers: %d\n", a+b);
    printf("Difference of the given numbers: %d\n", a-b);
    printf("Product of the given numbers: %d\n", a*b);
    printf("Quotient of the given numbers: %f\n", (float) a/b);

    return 0;
}